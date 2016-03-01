#include "sketchpencil.h"

SketchPencil::SketchPencil(QObject *parent, QPainter painter, int size = 10, int colour = Qt::black) : QObject(parent)
{
    pencilSize = size;
    pencilColour = colour;

    brush = new QBrush;
    brush->setColor(colour);

}

SketchPencil::~SketchPencil()
{

}

