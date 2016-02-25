#include "canvaswindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CanvasWindow w;
    w.show();

    return a.exec();
}
