#ifndef SINPLOT_H
#define SINPLOT_H

#include "qplot.h"

class SinPlot: public QPlot{
public:
    SinPlot(QCustomPlot *);
    void generateXY(double, double);
};

#endif // SINPLOT_H
