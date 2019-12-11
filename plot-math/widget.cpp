#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    mLayout = new QVBoxLayout;
    mPlot = new QCustomPlot(this);

    mLayout->addWidget(this->mPlot);
    mLayout->setMargin(0);

    setLayout(this->mLayout);

    mMinX = -10.0;
    mMaxX = 10.0;

    // X Range
    mPlot->xAxis->setRange(mMinX, mMaxX);
    mPlot->yAxis->setRange(-2, 2);

    // Y Range
    mPlot->xAxis->setLabel("X");
    mPlot->yAxis->setLabel("Y");

    // Legend
    mPlot->legend->setVisible(true);
    mPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignRight);

    mSinX = new SinPlot(mPlot);
    mSinX->plot(mMinX, mMaxX, QPen(Qt::red));

    mCosX = new CosPlot(mPlot);
    mCosX->plot(mMinX, mMaxX, QPen(Qt::blue));

    mSigX = new SigPlot(mPlot);
    mSigX->plot(mMinX, mMaxX, QPen(Qt::green));

    mTanhX = new TanhPlot(mPlot);
    mTanhX->plot(mMinX, mMaxX, QPen(Qt::yellow));
}

Widget::~Widget()
{
    delete ui;
}

