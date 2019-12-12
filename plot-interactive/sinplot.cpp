#include "sinplot.h"

SinPlot::SinPlot(QCustomPlot *parent): QPlot(parent){
    mGraph->setName("Sin(x)");

    mCoef.push_back(1.0);
    mCoef.push_back(1.0);
    mCoef.push_back(0.0);
}

void SinPlot::generateXY(double xmin, double xmax){
    QVector<double> x, y;

    for(double xi=xmin; xi<xmax; xi+=0.1){
        x.push_back(xi);
        y.push_back(mCoef[0]*qSin((mCoef[1]*xi) + mCoef[2]));
    }

    mX = x;
    mY = y;
}
