#include "canvaswindow.h"
#include "ui_canvaswindow.h"

CanvasWindow::CanvasWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CanvasWindow)
{
    ui->setupUi(this);
}

CanvasWindow::~CanvasWindow()
{
    delete ui;
}
