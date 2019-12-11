#include "tanhplot.h"

TanhPlot::TanhPlot(QCustomPlot *parent): QPlot(parent){
    mGraph->setName("Tanh(x)");
}

void TanhPlot::generateXY(double xmin, double xmax){
    QVector<double> x, y;
    double yv;
    for(double xi=xmin; xi<xmax; xi+=0.1){
        x.push_back(xi);
        yv = (qExp(xi) - qExp(-xi))/(qExp(xi) + qExp(-xi));
        y.push_back(yv);
    }

    mX = x;
    mY = y;
}
