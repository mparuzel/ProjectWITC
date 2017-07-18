#include <QApplication>
#include <QLabel>
#include <QWSServer>
#include "mainwindow.h"
int main(int argc, char **argv) {
    QApplication app (argc, argv);
#ifndef QT_NO_QWS_CURSOR
    //QWSServer::setCursorVisible(true);
#endif
    TMainWidget w;
    w.setWindowFlags(Qt::FramelessWindowHint);
    //w.showFullScreen();
    w.resize(1280, 600);
    w.showNormal();
    return app.exec();
}
