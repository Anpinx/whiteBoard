/****************************************************************************
** Meta object code from reading C++ file 'WBBoardController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/board/WBBoardController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBBoardController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBBoardController_t {
    QByteArrayData data[142];
    char stringdata0[1840];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBBoardController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBBoardController_t qt_meta_stringdata_WBBoardController = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WBBoardController"
QT_MOC_LITERAL(1, 18, 12), // "newPageAdded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "activeSceneChanged"
QT_MOC_LITERAL(4, 51, 11), // "zoomChanged"
QT_MOC_LITERAL(5, 63, 11), // "pZoomFactor"
QT_MOC_LITERAL(6, 75, 15), // "penColorChanged"
QT_MOC_LITERAL(7, 91, 22), // "controlViewportChanged"
QT_MOC_LITERAL(8, 114, 17), // "backgroundChanged"
QT_MOC_LITERAL(9, 132, 12), // "cacheEnabled"
QT_MOC_LITERAL(10, 145, 19), // "documentReorganized"
QT_MOC_LITERAL(11, 165, 5), // "index"
QT_MOC_LITERAL(12, 171, 15), // "displayMetadata"
QT_MOC_LITERAL(13, 187, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(14, 209, 8), // "metadata"
QT_MOC_LITERAL(15, 218, 20), // "pageSelectionChanged"
QT_MOC_LITERAL(16, 239, 25), // "centerOnThumbnailRequired"
QT_MOC_LITERAL(17, 265, 18), // "npapiWidgetCreated"
QT_MOC_LITERAL(18, 284, 3), // "Url"
QT_MOC_LITERAL(19, 288, 17), // "shareWindowRuning"
QT_MOC_LITERAL(20, 306, 19), // "showDocumentsDialog"
QT_MOC_LITERAL(21, 326, 12), // "showKeyboard"
QT_MOC_LITERAL(22, 339, 4), // "show"
QT_MOC_LITERAL(23, 344, 13), // "togglePodcast"
QT_MOC_LITERAL(24, 358, 7), // "checked"
QT_MOC_LITERAL(25, 366, 8), // "blackout"
QT_MOC_LITERAL(26, 375, 8), // "addScene"
QT_MOC_LITERAL(27, 384, 16), // "WBDocumentProxy*"
QT_MOC_LITERAL(28, 401, 5), // "proxy"
QT_MOC_LITERAL(29, 407, 10), // "sceneIndex"
QT_MOC_LITERAL(30, 418, 20), // "replaceActiveIfEmpty"
QT_MOC_LITERAL(31, 439, 16), // "WBGraphicsScene*"
QT_MOC_LITERAL(32, 456, 5), // "scene"
QT_MOC_LITERAL(33, 462, 14), // "duplicateScene"
QT_MOC_LITERAL(34, 477, 10), // "importPage"
QT_MOC_LITERAL(35, 488, 10), // "clearScene"
QT_MOC_LITERAL(36, 499, 15), // "clearSceneItems"
QT_MOC_LITERAL(37, 515, 20), // "clearSceneAnnotation"
QT_MOC_LITERAL(38, 536, 20), // "clearSceneBackground"
QT_MOC_LITERAL(39, 557, 6), // "zoomIn"
QT_MOC_LITERAL(40, 564, 10), // "scenePoint"
QT_MOC_LITERAL(41, 575, 7), // "zoomOut"
QT_MOC_LITERAL(42, 583, 11), // "zoomRestore"
QT_MOC_LITERAL(43, 595, 13), // "centerRestore"
QT_MOC_LITERAL(44, 609, 8), // "centerOn"
QT_MOC_LITERAL(45, 618, 4), // "zoom"
QT_MOC_LITERAL(46, 623, 5), // "ratio"
QT_MOC_LITERAL(47, 629, 10), // "handScroll"
QT_MOC_LITERAL(48, 640, 2), // "dx"
QT_MOC_LITERAL(49, 643, 2), // "dy"
QT_MOC_LITERAL(50, 646, 13), // "previousScene"
QT_MOC_LITERAL(51, 660, 9), // "nextScene"
QT_MOC_LITERAL(52, 670, 10), // "firstScene"
QT_MOC_LITERAL(53, 681, 9), // "lastScene"
QT_MOC_LITERAL(54, 691, 11), // "downloadURL"
QT_MOC_LITERAL(55, 703, 3), // "url"
QT_MOC_LITERAL(56, 707, 16), // "contentSourceUrl"
QT_MOC_LITERAL(57, 724, 4), // "pPos"
QT_MOC_LITERAL(58, 729, 5), // "pSize"
QT_MOC_LITERAL(59, 735, 12), // "isBackground"
QT_MOC_LITERAL(60, 748, 12), // "internalData"
QT_MOC_LITERAL(61, 761, 16), // "downloadFinished"
QT_MOC_LITERAL(62, 778, 7), // "WBItem*"
QT_MOC_LITERAL(63, 786, 8), // "pSuccess"
QT_MOC_LITERAL(64, 795, 9), // "sourceUrl"
QT_MOC_LITERAL(65, 805, 10), // "contentUrl"
QT_MOC_LITERAL(66, 816, 7), // "pHeader"
QT_MOC_LITERAL(67, 824, 5), // "pData"
QT_MOC_LITERAL(68, 830, 16), // "changeBackground"
QT_MOC_LITERAL(69, 847, 6), // "isDark"
QT_MOC_LITERAL(70, 854, 16), // "WBPageBackground"
QT_MOC_LITERAL(71, 871, 14), // "pageBackground"
QT_MOC_LITERAL(72, 886, 14), // "shareWindowRun"
QT_MOC_LITERAL(73, 901, 13), // "setToolCursor"
QT_MOC_LITERAL(74, 915, 4), // "tool"
QT_MOC_LITERAL(75, 920, 11), // "showMessage"
QT_MOC_LITERAL(76, 932, 7), // "message"
QT_MOC_LITERAL(77, 940, 17), // "showSpinningWheel"
QT_MOC_LITERAL(78, 958, 11), // "hideMessage"
QT_MOC_LITERAL(79, 970, 11), // "setDisabled"
QT_MOC_LITERAL(80, 982, 7), // "disable"
QT_MOC_LITERAL(81, 990, 13), // "setColorIndex"
QT_MOC_LITERAL(82, 1004, 11), // "pColorIndex"
QT_MOC_LITERAL(83, 1016, 10), // "removeTool"
QT_MOC_LITERAL(84, 1027, 13), // "WBToolWidget*"
QT_MOC_LITERAL(85, 1041, 10), // "toolWidget"
QT_MOC_LITERAL(86, 1052, 4), // "hide"
QT_MOC_LITERAL(87, 1057, 15), // "setWidePageSize"
QT_MOC_LITERAL(88, 1073, 18), // "setRegularPageSize"
QT_MOC_LITERAL(89, 1092, 17), // "stylusToolChanged"
QT_MOC_LITERAL(90, 1110, 9), // "grabScene"
QT_MOC_LITERAL(91, 1120, 10), // "pSceneRect"
QT_MOC_LITERAL(92, 1131, 8), // "addVideo"
QT_MOC_LITERAL(93, 1140, 20), // "WBGraphicsMediaItem*"
QT_MOC_LITERAL(94, 1161, 4), // "pUrl"
QT_MOC_LITERAL(95, 1166, 9), // "startPlay"
QT_MOC_LITERAL(96, 1176, 3), // "pos"
QT_MOC_LITERAL(97, 1180, 10), // "bUseSource"
QT_MOC_LITERAL(98, 1191, 8), // "addAudio"
QT_MOC_LITERAL(99, 1200, 12), // "addW3cWidget"
QT_MOC_LITERAL(100, 1213, 21), // "WBGraphicsWidgetItem*"
QT_MOC_LITERAL(101, 1235, 18), // "adjustDisplayViews"
QT_MOC_LITERAL(102, 1254, 3), // "cut"
QT_MOC_LITERAL(103, 1258, 4), // "copy"
QT_MOC_LITERAL(104, 1263, 5), // "paste"
QT_MOC_LITERAL(105, 1269, 15), // "processMimeData"
QT_MOC_LITERAL(106, 1285, 16), // "const QMimeData*"
QT_MOC_LITERAL(107, 1302, 9), // "pMimeData"
QT_MOC_LITERAL(108, 1312, 31), // "moveGraphicsWidgetToControlView"
QT_MOC_LITERAL(109, 1344, 13), // "graphicWidget"
QT_MOC_LITERAL(110, 1358, 21), // "moveToolWidgetToScene"
QT_MOC_LITERAL(111, 1380, 7), // "addItem"
QT_MOC_LITERAL(112, 1388, 16), // "freezeW3CWidgets"
QT_MOC_LITERAL(113, 1405, 6), // "freeze"
QT_MOC_LITERAL(114, 1412, 15), // "freezeW3CWidget"
QT_MOC_LITERAL(115, 1428, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(116, 1443, 4), // "item"
QT_MOC_LITERAL(117, 1448, 11), // "startScript"
QT_MOC_LITERAL(118, 1460, 10), // "stopScript"
QT_MOC_LITERAL(119, 1471, 8), // "saveData"
QT_MOC_LITERAL(120, 1480, 9), // "SaveFlags"
QT_MOC_LITERAL(121, 1490, 3), // "fls"
QT_MOC_LITERAL(122, 1494, 16), // "selectionChanged"
QT_MOC_LITERAL(123, 1511, 19), // "undoRedoStateChange"
QT_MOC_LITERAL(124, 1531, 7), // "canUndo"
QT_MOC_LITERAL(125, 1539, 20), // "documentSceneChanged"
QT_MOC_LITERAL(126, 1560, 6), // "pIndex"
QT_MOC_LITERAL(127, 1567, 15), // "autosaveTimeout"
QT_MOC_LITERAL(128, 1583, 18), // "appMainModeChanged"
QT_MOC_LITERAL(129, 1602, 33), // "WBApplicationController::Main..."
QT_MOC_LITERAL(130, 1636, 23), // "stylusToolDoubleClicked"
QT_MOC_LITERAL(131, 1660, 16), // "boardViewResized"
QT_MOC_LITERAL(132, 1677, 13), // "QResizeEvent*"
QT_MOC_LITERAL(133, 1691, 5), // "event"
QT_MOC_LITERAL(134, 1697, 21), // "documentWillBeDeleted"
QT_MOC_LITERAL(135, 1719, 6), // "pProxy"
QT_MOC_LITERAL(136, 1726, 28), // "updateBackgroundActionsState"
QT_MOC_LITERAL(137, 1755, 19), // "colorPaletteChanged"
QT_MOC_LITERAL(138, 1775, 19), // "libraryDialogClosed"
QT_MOC_LITERAL(139, 1795, 3), // "ret"
QT_MOC_LITERAL(140, 1799, 16), // "lastWindowClosed"
QT_MOC_LITERAL(141, 1816, 23) // "onDownloadModalFinished"

    },
    "WBBoardController\0newPageAdded\0\0"
    "activeSceneChanged\0zoomChanged\0"
    "pZoomFactor\0penColorChanged\0"
    "controlViewportChanged\0backgroundChanged\0"
    "cacheEnabled\0documentReorganized\0index\0"
    "displayMetadata\0QMap<QString,QString>\0"
    "metadata\0pageSelectionChanged\0"
    "centerOnThumbnailRequired\0npapiWidgetCreated\0"
    "Url\0shareWindowRuning\0showDocumentsDialog\0"
    "showKeyboard\0show\0togglePodcast\0checked\0"
    "blackout\0addScene\0WBDocumentProxy*\0"
    "proxy\0sceneIndex\0replaceActiveIfEmpty\0"
    "WBGraphicsScene*\0scene\0duplicateScene\0"
    "importPage\0clearScene\0clearSceneItems\0"
    "clearSceneAnnotation\0clearSceneBackground\0"
    "zoomIn\0scenePoint\0zoomOut\0zoomRestore\0"
    "centerRestore\0centerOn\0zoom\0ratio\0"
    "handScroll\0dx\0dy\0previousScene\0nextScene\0"
    "firstScene\0lastScene\0downloadURL\0url\0"
    "contentSourceUrl\0pPos\0pSize\0isBackground\0"
    "internalData\0downloadFinished\0WBItem*\0"
    "pSuccess\0sourceUrl\0contentUrl\0pHeader\0"
    "pData\0changeBackground\0isDark\0"
    "WBPageBackground\0pageBackground\0"
    "shareWindowRun\0setToolCursor\0tool\0"
    "showMessage\0message\0showSpinningWheel\0"
    "hideMessage\0setDisabled\0disable\0"
    "setColorIndex\0pColorIndex\0removeTool\0"
    "WBToolWidget*\0toolWidget\0hide\0"
    "setWidePageSize\0setRegularPageSize\0"
    "stylusToolChanged\0grabScene\0pSceneRect\0"
    "addVideo\0WBGraphicsMediaItem*\0pUrl\0"
    "startPlay\0pos\0bUseSource\0addAudio\0"
    "addW3cWidget\0WBGraphicsWidgetItem*\0"
    "adjustDisplayViews\0cut\0copy\0paste\0"
    "processMimeData\0const QMimeData*\0"
    "pMimeData\0moveGraphicsWidgetToControlView\0"
    "graphicWidget\0moveToolWidgetToScene\0"
    "addItem\0freezeW3CWidgets\0freeze\0"
    "freezeW3CWidget\0QGraphicsItem*\0item\0"
    "startScript\0stopScript\0saveData\0"
    "SaveFlags\0fls\0selectionChanged\0"
    "undoRedoStateChange\0canUndo\0"
    "documentSceneChanged\0pIndex\0autosaveTimeout\0"
    "appMainModeChanged\0WBApplicationController::MainMode\0"
    "stylusToolDoubleClicked\0boardViewResized\0"
    "QResizeEvent*\0event\0documentWillBeDeleted\0"
    "pProxy\0updateBackgroundActionsState\0"
    "colorPaletteChanged\0libraryDialogClosed\0"
    "ret\0lastWindowClosed\0onDownloadModalFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBBoardController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      98,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  504,    2, 0x06 /* Public */,
       3,    0,  505,    2, 0x06 /* Public */,
       4,    1,  506,    2, 0x06 /* Public */,
       6,    0,  509,    2, 0x06 /* Public */,
       7,    0,  510,    2, 0x06 /* Public */,
       8,    0,  511,    2, 0x06 /* Public */,
       9,    0,  512,    2, 0x06 /* Public */,
      10,    1,  513,    2, 0x06 /* Public */,
      12,    1,  516,    2, 0x06 /* Public */,
      15,    1,  519,    2, 0x06 /* Public */,
      16,    1,  522,    2, 0x06 /* Public */,
      17,    1,  525,    2, 0x06 /* Public */,
      19,    0,  528,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,  529,    2, 0x0a /* Public */,
      21,    1,  530,    2, 0x0a /* Public */,
      23,    1,  533,    2, 0x0a /* Public */,
      25,    0,  536,    2, 0x0a /* Public */,
      26,    0,  537,    2, 0x0a /* Public */,
      26,    3,  538,    2, 0x0a /* Public */,
      26,    2,  545,    2, 0x2a /* Public | MethodCloned */,
      26,    2,  550,    2, 0x0a /* Public */,
      26,    1,  555,    2, 0x2a /* Public | MethodCloned */,
      33,    0,  558,    2, 0x0a /* Public */,
      34,    0,  559,    2, 0x0a /* Public */,
      35,    0,  560,    2, 0x0a /* Public */,
      36,    0,  561,    2, 0x0a /* Public */,
      37,    0,  562,    2, 0x0a /* Public */,
      38,    0,  563,    2, 0x0a /* Public */,
      39,    1,  564,    2, 0x0a /* Public */,
      39,    0,  567,    2, 0x2a /* Public | MethodCloned */,
      41,    1,  568,    2, 0x0a /* Public */,
      41,    0,  571,    2, 0x2a /* Public | MethodCloned */,
      42,    0,  572,    2, 0x0a /* Public */,
      43,    0,  573,    2, 0x0a /* Public */,
      44,    1,  574,    2, 0x0a /* Public */,
      44,    0,  577,    2, 0x2a /* Public | MethodCloned */,
      45,    2,  578,    2, 0x0a /* Public */,
      47,    2,  583,    2, 0x0a /* Public */,
      50,    0,  588,    2, 0x0a /* Public */,
      51,    0,  589,    2, 0x0a /* Public */,
      52,    0,  590,    2, 0x0a /* Public */,
      53,    0,  591,    2, 0x0a /* Public */,
      54,    6,  592,    2, 0x0a /* Public */,
      54,    5,  605,    2, 0x2a /* Public | MethodCloned */,
      54,    4,  616,    2, 0x2a /* Public | MethodCloned */,
      54,    3,  625,    2, 0x2a /* Public | MethodCloned */,
      54,    2,  632,    2, 0x2a /* Public | MethodCloned */,
      54,    1,  637,    2, 0x2a /* Public | MethodCloned */,
      61,    9,  640,    2, 0x0a /* Public */,
      61,    8,  659,    2, 0x2a /* Public | MethodCloned */,
      61,    7,  676,    2, 0x2a /* Public | MethodCloned */,
      68,    2,  691,    2, 0x0a /* Public */,
      72,    0,  696,    2, 0x0a /* Public */,
      73,    1,  697,    2, 0x0a /* Public */,
      75,    2,  700,    2, 0x0a /* Public */,
      75,    1,  705,    2, 0x2a /* Public | MethodCloned */,
      78,    0,  708,    2, 0x0a /* Public */,
      79,    1,  709,    2, 0x0a /* Public */,
      81,    1,  712,    2, 0x0a /* Public */,
      83,    1,  715,    2, 0x0a /* Public */,
      86,    0,  718,    2, 0x0a /* Public */,
      22,    0,  719,    2, 0x0a /* Public */,
      87,    1,  720,    2, 0x0a /* Public */,
      88,    1,  723,    2, 0x0a /* Public */,
      89,    1,  726,    2, 0x0a /* Public */,
      90,    1,  729,    2, 0x0a /* Public */,
      92,    4,  732,    2, 0x0a /* Public */,
      92,    3,  741,    2, 0x2a /* Public | MethodCloned */,
      98,    4,  748,    2, 0x0a /* Public */,
      98,    3,  757,    2, 0x2a /* Public | MethodCloned */,
      99,    2,  764,    2, 0x0a /* Public */,
     101,    0,  769,    2, 0x0a /* Public */,
     102,    0,  770,    2, 0x0a /* Public */,
     103,    0,  771,    2, 0x0a /* Public */,
     104,    0,  772,    2, 0x0a /* Public */,
     105,    2,  773,    2, 0x0a /* Public */,
     108,    1,  778,    2, 0x0a /* Public */,
     110,    1,  781,    2, 0x0a /* Public */,
     111,    0,  784,    2, 0x0a /* Public */,
     112,    1,  785,    2, 0x0a /* Public */,
     114,    2,  788,    2, 0x0a /* Public */,
     117,    0,  793,    2, 0x0a /* Public */,
     118,    0,  794,    2, 0x0a /* Public */,
     119,    1,  795,    2, 0x0a /* Public */,
     119,    0,  798,    2, 0x2a /* Public | MethodCloned */,
     122,    0,  799,    2, 0x09 /* Protected */,
     123,    1,  800,    2, 0x09 /* Protected */,
     125,    2,  803,    2, 0x09 /* Protected */,
     127,    0,  808,    2, 0x08 /* Private */,
     128,    1,  809,    2, 0x08 /* Private */,
     130,    1,  812,    2, 0x08 /* Private */,
     131,    1,  815,    2, 0x08 /* Private */,
     134,    1,  818,    2, 0x08 /* Private */,
     136,    2,  821,    2, 0x08 /* Private */,
     137,    0,  826,    2, 0x08 /* Private */,
     138,    1,  827,    2, 0x08 /* Private */,
     140,    0,  830,    2, 0x08 /* Private */,
     141,    0,  831,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Int, QMetaType::Bool,   28,   29,   30,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Int,   28,   29,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Bool,   32,   30,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QPointF,   46,   40,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   48,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool, QMetaType::Bool,   55,   56,   57,   58,   59,   60,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool,   55,   56,   57,   58,   59,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::QPointF, QMetaType::QSize,   55,   56,   57,   58,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::QPointF,   55,   56,   57,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,   55,   56,
    QMetaType::Void, QMetaType::QUrl,   55,
    0x80000000 | 62, QMetaType::Bool, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool, QMetaType::Bool,   63,   64,   65,   66,   67,   57,   58,   59,   60,
    0x80000000 | 62, QMetaType::Bool, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool,   63,   64,   65,   66,   67,   57,   58,   59,
    0x80000000 | 62, QMetaType::Bool, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QPointF, QMetaType::QSize,   63,   64,   65,   66,   67,   57,   58,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 70,   69,   71,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   76,   77,
    QMetaType::Void, QMetaType::QString,   76,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void, 0x80000000 | 84,   85,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void, QMetaType::QRectF,   91,
    0x80000000 | 93, QMetaType::QUrl, QMetaType::Bool, QMetaType::QPointF, QMetaType::Bool,   94,   95,   96,   97,
    0x80000000 | 93, QMetaType::QUrl, QMetaType::Bool, QMetaType::QPointF,   94,   95,   96,
    0x80000000 | 93, QMetaType::QUrl, QMetaType::Bool, QMetaType::QPointF, QMetaType::Bool,   94,   95,   96,   97,
    0x80000000 | 93, QMetaType::QUrl, QMetaType::Bool, QMetaType::QPointF,   94,   95,   96,
    0x80000000 | 100, QMetaType::QUrl, QMetaType::QPointF,   94,   96,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 106, QMetaType::QPointF,  107,   57,
    QMetaType::Void, 0x80000000 | 100,  109,
    QMetaType::Void, 0x80000000 | 84,   85,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  113,
    QMetaType::Void, 0x80000000 | 115, QMetaType::Bool,  116,  113,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 120,  121,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  124,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Int,   28,  126,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 129,    2,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void, 0x80000000 | 132,  133,
    QMetaType::Void, 0x80000000 | 27,  135,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 70,   69,   71,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  139,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WBBoardController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBBoardController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newPageAdded(); break;
        case 1: _t->activeSceneChanged(); break;
        case 2: _t->zoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->penColorChanged(); break;
        case 4: _t->controlViewportChanged(); break;
        case 5: _t->backgroundChanged(); break;
        case 6: _t->cacheEnabled(); break;
        case 7: _t->documentReorganized((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->displayMetadata((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 9: _t->pageSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->centerOnThumbnailRequired((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->npapiWidgetCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->shareWindowRuning(); break;
        case 13: _t->showDocumentsDialog(); break;
        case 14: _t->showKeyboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->togglePodcast((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->blackout(); break;
        case 17: _t->addScene(); break;
        case 18: _t->addScene((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 19: _t->addScene((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->addScene((*reinterpret_cast< WBGraphicsScene*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->addScene((*reinterpret_cast< WBGraphicsScene*(*)>(_a[1]))); break;
        case 22: _t->duplicateScene(); break;
        case 23: _t->importPage(); break;
        case 24: _t->clearScene(); break;
        case 25: _t->clearSceneItems(); break;
        case 26: _t->clearSceneAnnotation(); break;
        case 27: _t->clearSceneBackground(); break;
        case 28: _t->zoomIn((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 29: _t->zoomIn(); break;
        case 30: _t->zoomOut((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 31: _t->zoomOut(); break;
        case 32: _t->zoomRestore(); break;
        case 33: _t->centerRestore(); break;
        case 34: _t->centerOn((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 35: _t->centerOn(); break;
        case 36: _t->zoom((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 37: _t->handScroll((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 38: _t->previousScene(); break;
        case 39: _t->nextScene(); break;
        case 40: _t->firstScene(); break;
        case 41: _t->lastScene(); break;
        case 42: _t->downloadURL((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< const QSize(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 43: _t->downloadURL((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< const QSize(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 44: _t->downloadURL((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< const QSize(*)>(_a[4]))); break;
        case 45: _t->downloadURL((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 46: _t->downloadURL((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 47: _t->downloadURL((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 48: { WBItem* _r = _t->downloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5])),(*reinterpret_cast< QPointF(*)>(_a[6])),(*reinterpret_cast< QSize(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< WBItem**>(_a[0]) = std::move(_r); }  break;
        case 49: { WBItem* _r = _t->downloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5])),(*reinterpret_cast< QPointF(*)>(_a[6])),(*reinterpret_cast< QSize(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< WBItem**>(_a[0]) = std::move(_r); }  break;
        case 50: { WBItem* _r = _t->downloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5])),(*reinterpret_cast< QPointF(*)>(_a[6])),(*reinterpret_cast< QSize(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< WBItem**>(_a[0]) = std::move(_r); }  break;
        case 51: _t->changeBackground((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< WBPageBackground(*)>(_a[2]))); break;
        case 52: _t->shareWindowRun(); break;
        case 53: _t->setToolCursor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 55: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 56: _t->hideMessage(); break;
        case 57: _t->setDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->setColorIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: _t->removeTool((*reinterpret_cast< WBToolWidget*(*)>(_a[1]))); break;
        case 60: _t->hide(); break;
        case 61: _t->show(); break;
        case 62: _t->setWidePageSize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->setRegularPageSize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: _t->stylusToolChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->grabScene((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 66: { WBGraphicsMediaItem* _r = _t->addVideo((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< WBGraphicsMediaItem**>(_a[0]) = std::move(_r); }  break;
        case 67: { WBGraphicsMediaItem* _r = _t->addVideo((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< WBGraphicsMediaItem**>(_a[0]) = std::move(_r); }  break;
        case 68: { WBGraphicsMediaItem* _r = _t->addAudio((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< WBGraphicsMediaItem**>(_a[0]) = std::move(_r); }  break;
        case 69: { WBGraphicsMediaItem* _r = _t->addAudio((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< WBGraphicsMediaItem**>(_a[0]) = std::move(_r); }  break;
        case 70: { WBGraphicsWidgetItem* _r = _t->addW3cWidget((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< WBGraphicsWidgetItem**>(_a[0]) = std::move(_r); }  break;
        case 71: _t->adjustDisplayViews(); break;
        case 72: _t->cut(); break;
        case 73: _t->copy(); break;
        case 74: _t->paste(); break;
        case 75: _t->processMimeData((*reinterpret_cast< const QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 76: _t->moveGraphicsWidgetToControlView((*reinterpret_cast< WBGraphicsWidgetItem*(*)>(_a[1]))); break;
        case 77: _t->moveToolWidgetToScene((*reinterpret_cast< WBToolWidget*(*)>(_a[1]))); break;
        case 78: _t->addItem(); break;
        case 79: _t->freezeW3CWidgets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: _t->freezeW3CWidget((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 81: _t->startScript(); break;
        case 82: _t->stopScript(); break;
        case 83: _t->saveData((*reinterpret_cast< SaveFlags(*)>(_a[1]))); break;
        case 84: _t->saveData(); break;
        case 85: _t->selectionChanged(); break;
        case 86: _t->undoRedoStateChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: _t->documentSceneChanged((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 88: _t->autosaveTimeout(); break;
        case 89: _t->appMainModeChanged((*reinterpret_cast< WBApplicationController::MainMode(*)>(_a[1]))); break;
        case 90: _t->stylusToolDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 91: _t->boardViewResized((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 92: _t->documentWillBeDeleted((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1]))); break;
        case 93: _t->updateBackgroundActionsState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< WBPageBackground(*)>(_a[2]))); break;
        case 94: _t->colorPaletteChanged(); break;
        case 95: _t->libraryDialogClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 96: _t->lastWindowClosed(); break;
        case 97: _t->onDownloadModalFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 80:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 87:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 92:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::newPageAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::activeSceneChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::zoomChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::penColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::controlViewportChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::backgroundChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::cacheEnabled)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::documentReorganized)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)(QMap<QString,QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::displayMetadata)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::pageSelectionChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::centerOnThumbnailRequired)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::npapiWidgetCreated)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::shareWindowRuning)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBBoardController::staticMetaObject = { {
    QMetaObject::SuperData::link<WBDocumentContainer::staticMetaObject>(),
    qt_meta_stringdata_WBBoardController.data,
    qt_meta_data_WBBoardController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBBoardController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBBoardController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBBoardController.stringdata0))
        return static_cast<void*>(this);
    return WBDocumentContainer::qt_metacast(_clname);
}

int WBBoardController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBDocumentContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 98)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 98;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 98)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 98;
    }
    return _id;
}

// SIGNAL 0
void WBBoardController::newPageAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBBoardController::activeSceneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WBBoardController::zoomChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBBoardController::penColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WBBoardController::controlViewportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WBBoardController::backgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WBBoardController::cacheEnabled()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void WBBoardController::documentReorganized(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WBBoardController::displayMetadata(QMap<QString,QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WBBoardController::pageSelectionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WBBoardController::centerOnThumbnailRequired(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WBBoardController::npapiWidgetCreated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void WBBoardController::shareWindowRuning()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
