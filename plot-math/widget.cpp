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

    mPlot->xAxis->setRange(mMinX, mMaxX);
    mPlot->yAxis->setRange(-2, 2);

    mSinX = new SinPlot(mPlot);
    mSinX->generateXY(mMinX, mMaxX);
    mSinX->drawGraph();

    mCosX = new CosPlot(mPlot);
    mCosX->generateXY(mMinX, mMaxX);
    mCosX->drawGraph();
}

Widget::~Widget()
{
    delete ui;
}

