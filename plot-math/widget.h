#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include "qcustomplot.h"
#include "sinplot.h"
#include "cosplot.h"
#include "sigplot.h"
#include "tanhplot.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

    QVBoxLayout *mLayout;
    QCustomPlot *mPlot;

    QPlot *mSinX;
    QPlot *mCosX;
    QPlot *mSigX;
    QPlot *mTanhX;

    double mMinX;
    double mMaxX;
};
#endif // WIDGET_H
