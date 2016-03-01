#ifndef SKETCHPENCIL_H
#define SKETCHPENCIL_H

#include <QObject>
#include <QPainter>
#include <QColor>

class SketchPencil : public QBrush
{
    Q_OBJECT
public:
    explicit SketchPencil(QObject *parent = 0, QPainter painter, int size, int colour);
    ~SketchPencil();

private:
    int pencilSize;
    QColor pencilColour;

    QBrush *brush;
signals:

public slots:
};

#endif // SKETCHPENCIL_H
