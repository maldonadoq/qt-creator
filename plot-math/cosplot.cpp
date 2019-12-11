#include "cosplot.h"

CosPlot::CosPlot(QCustomPlot *parent): QPlot(parent){

}

void CosPlot::generateXY(double xmin, double xmax){
    QVector<double> x, y;

    for(double xi=xmin; xi<xmax; xi+=0.1){
        x.push_back(xi);
        y.push_back(qCos(xi));
    }

    mX = x;
    mY = y;
}
