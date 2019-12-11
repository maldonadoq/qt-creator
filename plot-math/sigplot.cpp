#include "sigplot.h"

SigPlot::SigPlot(QCustomPlot *parent): QPlot(parent){
    mGraph->setName("Sig(x)");
}

void SigPlot::generateXY(double xmin, double xmax){
    QVector<double> x, y;
    double yv;
    for(double xi=xmin; xi<xmax; xi+=0.1){
        x.push_back(xi);
        yv = 1/(1 + qExp(-xi));
        y.push_back(yv);
    }

    mX = x;
    mY = y;
}
