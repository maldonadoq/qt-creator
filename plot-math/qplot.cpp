#include "qplot.h"

QPlot::QPlot(QCustomPlot *parent)
{
    mParent = parent;
    mGraph = mParent->addGraph();
}

void QPlot::setData(){
    mGraph->setData(mX, mY);
}

void QPlot::setPen(QPen pen){
    mGraph->setPen(pen);
}

void QPlot::plot(double xmin, double xmax, QPen pen){
    generateXY(xmin, xmax);
    setData();
    setPen(pen);
}

QPlot::~QPlot(){
    delete mGraph;
    delete mParent;

    mX.clear();
    mY.clear();
}
