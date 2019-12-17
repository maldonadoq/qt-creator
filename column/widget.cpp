#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QFileSystemModel *model = new QFileSystemModel(this);
    model->setRootPath(QDir::rootPath());
    ui->columnView->setModel(model);
}

Widget::~Widget()
{
    delete ui;
}
