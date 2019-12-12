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
    void setGraph();
    void removeGraph();

    virtual ~QPlot();
    virtual void generateXY(double, double) = 0;

    QVector<double> mCoef;
protected:
    QCPGraph *mGraph;
    QVector<double> mX;
    QVector<double> mY;
    QCustomPlot *mCustomPlot;
};

#endif // QPLOT_H
