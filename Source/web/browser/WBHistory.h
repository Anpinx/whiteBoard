#ifndef WBHISTORY_H
#define WBHISTORY_H

#include "WBModelMenu.h"

#include <QtWidgets>
#include <QtWebEngine>
#include <QWebEngineHistory>

class WBHistoryItem
{
    public:
        WBHistoryItem() {}
        WBHistoryItem(const QString &u,
                    const QDateTime &d = QDateTime(), const QString &t = QString())
            : title(t), url(u), dateTime(d) {}

        inline bool operator==(const WBHistoryItem &other) const
            { return other.title == title
              && other.url == url && other.dateTime == dateTime; }

        // history is sorted in reverse
        inline bool operator <(const WBHistoryItem &other) const
            { return dateTime > other.dateTime; }

        QString title;
        QString url;
        QDateTime dateTime;
};


class UBAutoSaver;
class WBHistoryModel;
class WBHistoryFilterModel;
class WBHistoryTreeModel;

class WBHistoryManager : public QObject, public QWebEngineHistory
{
    Q_OBJECT;
    Q_PROPERTY(int historyLimit READ historyLimit WRITE setHistoryLimit);

    signals:
        void historyReset();
        void entryAdded(const WBHistoryItem &item);
        void entryRemoved(const WBHistoryItem &item);
        void entryUpdated(int offset);

    public:
        WBHistoryManager(QObject *parent = 0);
        ~WBHistoryManager();

        bool historyContains(const QString &url) const;
        void addHistoryEntry(const QString &url);

        void updateHistoryItem(const QUrl &url, const QString &title);

        int historyLimit() const;
        void setHistoryLimit(int limit);

        QList<WBHistoryItem> history() const;
        void setHistory(const QList<WBHistoryItem> &history, bool loadedAndSorted = false);

        // History manager keeps around these models for use by the completer and other classes
        WBHistoryModel *historyModel() const;
        WBHistoryFilterModel *historyFilterModel() const;
        WBHistoryTreeModel *historyTreeModel() const;

    public slots:
        void clear();
        void loadSettings();

    private slots:
        void save();
        void checkForExpired();

    protected:
        void addHistoryItem(const WBHistoryItem &item);

    private:
        void load();

        UBAutoSaver *m_saveTimer;
        int m_historyLimit;
        QTimer m_expiredTimer;
        QList<WBHistoryItem> m_history;
        QString m_lastSavedUrl;

        WBHistoryModel *m_historyModel;
        WBHistoryFilterModel *m_historyFilterModel;
        WBHistoryTreeModel *m_historyTreeModel;
};

class WBHistoryModel : public QAbstractTableModel
{
    Q_OBJECT;

    public slots:
        void historyReset();
        void entryAdded();
        void entryUpdated(int offset);

    public:
        enum Roles {
            DateRole = Qt::UserRole + 1,
            DateTimeRole = Qt::UserRole + 2,
            UrlRole = Qt::UserRole + 3,
            UrlStringRole = Qt::UserRole + 4
        };

        WBHistoryModel(WBHistoryManager *history, QObject *parent = 0);
        QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
        int columnCount(const QModelIndex &parent = QModelIndex()) const;
        int rowCount(const QModelIndex &parent = QModelIndex()) const;
        bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex());

    private:
        WBHistoryManager *m_history;
};

/*!
    Proxy model that will remove any duplicate entries.
    Both m_sourceRow and m_historyHash store their offsets not from
    the front of the list, but as offsets from the back.
  */
class WBHistoryFilterModel : public QAbstractProxyModel
{
    Q_OBJECT;

public:
    WBHistoryFilterModel(QAbstractItemModel *sourceModel, QObject *parent = 0);

    inline bool historyContains(const QString &url) const
        { load(); return m_historyHash.contains(url); }
    int historyLocation(const QString &url) const;

    QModelIndex mapFromSource(const QModelIndex &sourceIndex) const;
    QModelIndex mapToSource(const QModelIndex &proxyIndex) const;
    void setSourceModel(QAbstractItemModel *sourceModel);
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QModelIndex index(int, int, const QModelIndex& = QModelIndex()) const;
    QModelIndex parent(const QModelIndex& index= QModelIndex()) const;
    bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex());
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

private slots:
    void sourceReset();
    void sourceDataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight);
    void sourceRowsInserted(const QModelIndex &parent, int start, int end);
    void sourceRowsRemoved(const QModelIndex &, int, int);

private:
    void load() const;

    mutable QList<int> m_sourceRow;
    mutable QHash<QString, int> m_historyHash;
    mutable bool m_loaded;
};

/*
    The history menu
    - Removes the first twenty entries and puts them as children of the top level.
    - If there are less then twenty entries then the first folder is also removed.

    The mapping is done by knowing that HistoryTreeModel is over a table
    We store that row offset in our index's private data.
*/
class WBHistoryMenuModel : public QAbstractProxyModel
{
    Q_OBJECT;

    public:
        WBHistoryMenuModel(WBHistoryTreeModel *sourceModel, QObject *parent = 0);
        int columnCount(const QModelIndex &parent) const;
        int rowCount(const QModelIndex &parent = QModelIndex()) const;
        QModelIndex mapFromSource(const QModelIndex & sourceIndex) const;
        QModelIndex mapToSource(const QModelIndex & proxyIndex) const;
        QModelIndex index(int, int, const QModelIndex &parent = QModelIndex()) const;
        QModelIndex parent(const QModelIndex &index = QModelIndex()) const;

        int bumpedRows() const;

    private:
        WBHistoryTreeModel *m_treeModel;
};

// Menu that is dynamically populated from the history
class WBHistoryMenu : public WBModelMenu
{
    Q_OBJECT

    signals:
        void openUrl(const QUrl &url);

    public:
         WBHistoryMenu(QWidget *parent = 0);
         void setInitialActions(QList<QAction*> actions);

    protected:
        bool prePopulated();
        void postPopulated();

    private slots:
        void activated(const QModelIndex &index);
        void showHistoryDialog();

    private:
        WBHistoryManager *m_history;
        WBHistoryMenuModel *m_historyMenuModel;
        QList<QAction*> m_initialActions;
};

// proxy model for the history model that
// exposes each url http://www.foo.com and it url starting at the host www.foo.com
class WBHistoryCompletionModel : public QAbstractProxyModel
{
    Q_OBJECT;

    public:
        WBHistoryCompletionModel(QObject *parent = 0);
        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
        int rowCount(const QModelIndex &parent = QModelIndex()) const;
        int columnCount(const QModelIndex &parent = QModelIndex()) const;
        QModelIndex mapFromSource(const QModelIndex &sourceIndex) const;
        QModelIndex mapToSource(const QModelIndex &proxyIndex) const;
        QModelIndex index(int, int, const QModelIndex& = QModelIndex()) const;
        QModelIndex parent(const QModelIndex& index= QModelIndex()) const;
        void setSourceModel(QAbstractItemModel *sourceModel);

    private slots:
        void sourceReset();

};

// proxy model for the history model that converts the list
// into a tree, one top level node per day.
// Used in the HistoryDialog.
class WBHistoryTreeModel : public QAbstractProxyModel
{
    Q_OBJECT;

    public:
        WBHistoryTreeModel(QAbstractItemModel *sourceModel, QObject *parent = 0);
        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
        int columnCount(const QModelIndex &parent) const;
        int rowCount(const QModelIndex &parent = QModelIndex()) const;
        QModelIndex mapFromSource(const QModelIndex &sourceIndex) const;
        QModelIndex mapToSource(const QModelIndex &proxyIndex) const;
        QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
        QModelIndex parent(const QModelIndex &index= QModelIndex()) const;
        bool hasChildren(const QModelIndex &parent = QModelIndex()) const;
        Qt::ItemFlags flags(const QModelIndex &index) const;
        bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex());
        QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;

        void setSourceModel(QAbstractItemModel *sourceModel);

    private slots:
        void sourceReset();
        void sourceRowsInserted(const QModelIndex &parent, int start, int end);
        void sourceRowsRemoved(const QModelIndex &parent, int start, int end);

    private:
        int sourceDateRow(int row) const;
        mutable QList<int> m_sourceRowCache;

};

// A modified QSortFilterProxyModel that always accepts the root nodes in the tree
// so filtering is only done on the children.
// Used in the HistoryDialog
class WBTreeProxyModel : public QSortFilterProxyModel
{
    Q_OBJECT;

    public:
        WBTreeProxyModel(QObject *parent = 0);

    protected:
        bool filterAcceptsRow(int source_row, const QModelIndex &source_parent) const;
};


#endif // WBHISTORY_H

