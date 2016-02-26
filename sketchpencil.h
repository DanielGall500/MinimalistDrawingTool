#ifndef SKETCHPENCIL_H
#define SKETCHPENCIL_H

#include <QObject>
#include <QPainter>

class SketchPencil : public QBrush
{
    Q_OBJECT
public:
    explicit SketchPencil(QObject *parent = 0);
    ~SketchPencil();

private:
    int pencilSize;
    QBrush brush;

signals:

public slots:
};

#endif // SKETCHPENCIL_H
