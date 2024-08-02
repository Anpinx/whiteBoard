#include "XPDFRenderer.h"

#include <QtGui>

#include <frameworks/WBPlatformUtils.h>

#include "core/memcheck.h"

QAtomicInt XPDFRenderer::sInstancesCount = 0;

XPDFRenderer::XPDFRenderer(const QString &filename, bool importingFile)
    : mDocument(0)
    //, mpSplashBitmap(0)
    //, mSplash(0)
{
    Q_UNUSED(importingFile);
    //if (!globalParams)
    //{
    //    // globalParams must be allocated once and never be deleted
    //    // note that this is *not* an instance variable of this XPDFRenderer class
    //    globalParams = new GlobalParams(0);
    //    globalParams->setupBaseFonts(QFile::encodeName(WBPlatformUtils::applicationResourcesDirectory() + "/" + "fonts").data());
    //}

    //mDocument = new PDFDoc(new GString(filename.toLocal8Bit()), 0, 0, 0); // the filename GString is deleted on PDFDoc desctruction
    sInstancesCount.ref();
}

XPDFRenderer::~XPDFRenderer()
{
    //if(mSplash){
    //    delete mSplash;
    //    mSplash = NULL;
    //}

    if (mDocument)
    {
        delete mDocument;
        sInstancesCount.deref();
    }

    //if (sInstancesCount.loadAcquire() == 0 && globalParams)
    //{
    //    delete globalParams;
    //    globalParams = 0;
    //}
}

bool XPDFRenderer::isValid() const
{
    //if (mDocument)
    //{
    //    return mDocument->isOk();
    //}
    //else
    {
        return false;
    }
}

int XPDFRenderer::pageCount() const
{
    //if (isValid())
    //    return mDocument->getNumPages();
    //else
        return 0;
}

QString XPDFRenderer::title() const
{
    //if (isValid())
    //{
    //    Object pdfInfo;
    //    mDocument->getDocInfo(&pdfInfo);
    //    if (pdfInfo.isDict())
    //    {
    //        Object title;
    //        Dict *infoDict = pdfInfo.getDict();
    //        if (infoDict->lookup((char*)"Title", &title)->isString())
    //        {
    //            GString *gstring = title.getString();
    //            return QString(gstring->getCString());
    //        }
    //    }
    //}

    return QString();
}


QSizeF XPDFRenderer::pageSizeF(int pageNumber) const
{
    qreal cropWidth = 0;
    qreal cropHeight = 0;

    //if (isValid())
    //{
    //    int rotate = mDocument->getPageRotate(pageNumber);

    //    cropWidth = mDocument->getPageCropWidth(pageNumber) * this->dpiForRendering / 72.0;
    //    cropHeight = mDocument->getPageCropHeight(pageNumber) * this->dpiForRendering / 72.0;

    //    if (rotate == 90 || rotate == 270)
    //    {
    //        //switching width and height
    //        qreal tmpVar = cropWidth;
    //        cropWidth = cropHeight;
    //        cropHeight = tmpVar;
    //    }
    //}
    return QSizeF(cropWidth, cropHeight);
}


int XPDFRenderer::pageRotation(int pageNumber) const
{
    //if (mDocument)
    //    return  mDocument->getPageRotate(pageNumber);
    //else
        return 0;
}

void XPDFRenderer::render(QPainter *p, int pageNumber, const QRectF &bounds)
{
    if (isValid())
    {
        qreal xscale = p->worldTransform().m11();
        qreal yscale = p->worldTransform().m22();

		QImage *pdfImage = NULL;//createPDFImage(pageNumber, xscale, yscale, bounds);
        QTransform savedTransform = p->worldTransform();
        p->resetTransform();
        p->drawImage(QPointF(savedTransform.dx() + mSliceX, savedTransform.dy() + mSliceY), *pdfImage);
        p->setWorldTransform(savedTransform);
        delete pdfImage;
    }
}

//QImage* XPDFRenderer::createPDFImage(int pageNumber, qreal xscale, qreal yscale, const QRectF &bounds)
//{
//    if (isValid())
//    {
//        SplashColor paperColor = {0xFF, 0xFF, 0xFF}; // white
//        if(mSplash)
//            delete mSplash;
//        mSplash = new SplashOutputDev(splashModeRGB8, 1, gFalse, paperColor);
//        mSplash->startDoc(mDocument->getXRef());
//        int rotation = 0; // in degrees (get it from the worldTransform if we want to support rotation)
//        GBool useMediaBox = gFalse;
//        GBool crop = gTrue;
//        GBool printing = gFalse;
//        mSliceX = 0.;
//        mSliceY = 0.;
//
//        if (bounds.isNull())
//        {
//            mDocument->displayPage(mSplash, pageNumber, this->dpiForRendering * xscale, this->dpiForRendering *yscale,
//                                   rotation, useMediaBox, crop, printing);
//        }
//        else
//        {
//            mSliceX = bounds.x() * xscale;
//            mSliceY = bounds.y() * yscale;
//            qreal sliceW = bounds.width() * xscale;
//            qreal sliceH = bounds.height() * yscale;
//
//            mDocument->displayPageSlice(mSplash, pageNumber, this->dpiForRendering * xscale, this->dpiForRendering * yscale,
//                rotation, useMediaBox, crop, printing, mSliceX, mSliceY, sliceW, sliceH);
//        }
//
//        mpSplashBitmap = mSplash->getBitmap();
//    }
//    return new QImage(mpSplashBitmap->getDataPtr(), mpSplashBitmap->getWidth(), mpSplashBitmap->getHeight(), mpSplashBitmap->getWidth() * 3, QImage::Format_RGB888);
//}
