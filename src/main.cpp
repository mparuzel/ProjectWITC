/*
 * Author: Mark Paruzel <mark@markparuzel.com>
 * Date:  2017-07-17
 *
 * This file is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This file is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this file; if not, see: <http://www.gnu.org/licenses/>.
 */

#include <QApplication>
#include <QLabel>
#include <QWSServer>

#include "mainwindow.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    TMainWidget w;

#ifndef QT_NO_QWS_CURSOR
    //QWSServer::setCursorVisible(true);
#endif

    w.setWindowFlags(Qt::FramelessWindowHint);
    //w.showFullScreen();
    w.resize(1280, 600);
    w.showNormal();

    return app.exec();
}
