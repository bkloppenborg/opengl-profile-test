/*
 * main.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: bkloppenborg
 */


#include <QtGui>
#include <QApplication>
#include "window.h"

int main(int argc, char* argv[])
{

	// Pass off to the GUI:
    QApplication app(argc, argv);

    QSurfaceFormat format;
    format.setDepthBufferSize(24);
    format.setStencilBufferSize(8);
    format.setVersion(3, 2);
    format.setProfile(QSurfaceFormat::CoreProfile);
    QSurfaceFormat::setDefaultFormat(format);

    Window window;
    window.resize(QSize(800, 600));
    window.show();

    return app.exec();
}
