#ifndef SKETCHPENCIL_H
#define SKETCHPENCIL_H

#include <QObject>
#include <QPainter>
#include <QColor>

class SketchPencil : public QObject
{
    Q_OBJECT
public:
    explicit SketchPencil(QObject *parent = 0, int size = 10, Qt::GlobalColor colour = Qt::black);
    ~SketchPencil();

private:
    int pencilSize;
    QColor pencilColour;

    QBrush *brush;
signals:

public slots:
};

#endif // SKETCHPENCIL_H
