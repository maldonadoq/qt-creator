#include "widget.h"
#include "ui_widget.h"

#define XMIN -10.0
#define XMAX +10.0
#define YMIN -10.0
#define YMAX +10.0

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    mFunc = new SinPlot(ui->customPlot);

    ui->customPlot->xAxis->setRange(XMIN, XMAX);
    ui->customPlot->yAxis->setRange(XMIN, XMAX);

    plot();
}

Widget::~Widget(){
    delete ui;
}

void Widget::on_spinBoxA_valueChanged(double a){
    mFunc->mCoef[0] = a;
    plot();
}

void Widget::on_spinBoxB_valueChanged(double b){
    mFunc->mCoef[1] = b;
    plot();
}

void Widget::on_spinBoxC_valueChanged(double c){
    mFunc->mCoef[2] = c;
    plot();
}

void Widget::plot(){
    mFunc->plot(XMIN, XMAX, QPen(Qt::green));
    ui->customPlot->replot();
}
