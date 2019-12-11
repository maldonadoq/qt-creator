#include "sinplot.h"

SinPlot::SinPlot(QCustomPlot *parent): QPlot(parent){

}

void SinPlot::generateXY(double xmin, double xmax){
    QVector<double> x, y;

    for(double xi=xmin; xi<xmax; xi+=0.1){
        x.push_back(xi);
        y.push_back(qSin(xi));
    }

    mX = x;
    mY = y;
}
