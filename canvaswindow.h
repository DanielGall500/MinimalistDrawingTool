#ifndef CANVASWINDOW_H
#define CANVASWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QPushButton>
#include <QPainter>
#include "sketchpencil.h"

namespace Ui {
class CanvasWindow;
}

class CanvasWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CanvasWindow(QWidget *parent = 0);
    ~CanvasWindow();

private:
    Ui::CanvasWindow *ui;

    SketchPencil *sketchPencil;
};

#endif // CANVASWINDOW_H
