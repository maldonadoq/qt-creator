#ifndef QPLOT_H
#define QPLOT_H

#include <QVector>
#include <QtMath>
#include "qcustomplot.h"

class QCPGraph;

class QPlot
{
public:
    QPlot(QCustomPlot *);

    void setData();
    void setPen(QPen);
    void plot(double, double, QPen);

    virtual ~QPlot();
    virtual void generateXY(double, double) = 0;

protected:
    QCPGraph *mGraph;
    QVector<double> mX;
    QVector<double> mY;
    QCustomPlot *mParent;
};

#endif // QPLOT_H
