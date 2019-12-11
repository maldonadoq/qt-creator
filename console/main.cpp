#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Hello World";
    qDebug() << 2019;
    return a.exec();
}
