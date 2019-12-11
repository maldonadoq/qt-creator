#ifndef TANHPLOT_H
#define TANHPLOT_H

#include "qplot.h"

class TanhPlot: public QPlot{
public:
    TanhPlot(QCustomPlot *);
    void generateXY(double, double);
};

#endif // TANHPLOT_H
