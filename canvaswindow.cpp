#include "canvaswindow.h"
#include "ui_canvaswindow.h"
#include "sketchpencil.h"

CanvasWindow::CanvasWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::CanvasWindow)
{
    ui->setupUi(this);
    QWidget::setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);

    QRect rec = QApplication::desktop()->screenGeometry();
    QWidget::setFixedSize(rec.width() / 2, rec.height() / 2);

    QPainter masterPainter(this);
    sketchPencil = new SketchPencil(this);
}

CanvasWindow::~CanvasWindow()
{
    delete ui;
}

void CanvasWindow::lineInterpolation()
{
    QPainterPath path;

    path.moveTo(lastPosition);
    path.lineTo(currentPosition);

    qreal length = path.length();
    qreal pos = 0;

    while(pos < length)
    {
        qreal percent = path.percentAtLength(pos);

        pos += spacing;
    }

}
