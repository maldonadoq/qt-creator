#ifndef TOPENGLWIDGET_H
#define TOPENGLWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include "utils.h"

class TOpenGLWidget: public QOpenGLWidget, public QOpenGLFunctions
{
    Q_OBJECT
public:
    TOpenGLWidget(QWidget *parent = nullptr);

protected:
    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int, int) override;
};

#endif // TOPENGLWIDGET_H
