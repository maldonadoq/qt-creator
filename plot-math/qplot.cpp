#include "qplot.h"

QPlot::QPlot(QCustomPlot *parent)
{
    mParent = parent;
}

void QPlot::drawGraph(){
    mGraph = mParent->addGraph();
    mGraph->setData(mX, mY);
}

QPlot::~QPlot(){
    delete mGraph;
    delete mParent;

    mX.clear();
    mY.clear();
}
