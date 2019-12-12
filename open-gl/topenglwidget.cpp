#include "topenglwidget.h"

TOpenGLWidget::TOpenGLWidget(QWidget *parent)
    : QOpenGLWidget { parent }
{

}

void TOpenGLWidget::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_COLOR_MATERIAL);
}

void TOpenGLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    TDrawSquare(0.0f, 0.0f, 1.0f);
}

void TOpenGLWidget::resizeGL(int w, int h)
{
    glViewport(0.0f, 0.0f, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
