#include "canvaswindow.h"
#include "ui_canvaswindow.h"

CanvasWindow::CanvasWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CanvasWindow)
{
    ui->setupUi(this);
    QWidget::setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);

    QRect rec = QApplication::desktop()->screenGeometry();
    QWidget::setFixedSize(rec.width() / 2, rec.height() / 2);

    masterPainter = new QPainter(this);
    sketchPencil = new SketchPencil(this, masterPainter);
}

CanvasWindow::~CanvasWindow()
{
    delete ui;
}
