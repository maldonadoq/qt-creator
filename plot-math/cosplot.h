#ifndef COSPLOT_H
#define COSPLOT_H

#include "qplot.h"

class CosPlot: public QPlot{
public:
    CosPlot(QCustomPlot *);
    void generateXY(double, double);
};

#endif // COSPLOT_H
