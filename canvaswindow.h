#ifndef CANVASWINDOW_H
#define CANVASWINDOW_H

#include <QMainWindow>

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
};

#endif // CANVASWINDOW_H
