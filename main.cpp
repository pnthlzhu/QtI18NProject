#include "mainwindow.h"

#include <QApplication>
#include <qtranslator.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translate;

    translate.load("jp.qm");
    a.installTranslator(&translate);

    MainWindow w;
    w.show();
    return a.exec();
}
