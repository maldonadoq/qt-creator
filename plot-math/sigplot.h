#ifndef SIGPLOT_H
#define SIGPLOT_H

#include "qplot.h"

class SigPlot: public QPlot{
public:
    SigPlot(QCustomPlot *);
    void generateXY(double, double);
};

#endif // SIGPLOT_H
