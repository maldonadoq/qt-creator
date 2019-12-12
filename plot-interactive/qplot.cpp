#include "qplot.h"

QPlot::QPlot(QCustomPlot *customPlot){
    mCustomPlot = customPlot;
    setGraph();
}

void QPlot::setData(){
    mGraph->setData(mX, mY);
}

void QPlot::setPen(QPen pen){
    mGraph->setPen(pen);
}

void QPlot::setGraph(){
    mGraph = mCustomPlot->addGraph();
}

void QPlot::removeGraph(){
    mCustomPlot->removeGraph(mGraph);
}

void QPlot::plot(double xmin, double xmax, QPen pen){
    removeGraph();
    setGraph();

    generateXY(xmin, xmax);
    setData();
    setPen(pen);
}

QPlot::~QPlot(){
    delete mGraph;
    delete mCustomPlot;

    mX.clear();
    mY.clear();
}
