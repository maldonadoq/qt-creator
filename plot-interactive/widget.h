#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "qplot.h"
#include "sinplot.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_spinBoxA_valueChanged(double);
    void on_spinBoxB_valueChanged(double);
    void on_spinBoxC_valueChanged(double);

private:
    void plot();

    Ui::Widget *ui;
    QPlot *mFunc;
};

#endif // WIDGET_H
