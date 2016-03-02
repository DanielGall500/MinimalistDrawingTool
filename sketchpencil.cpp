#include "sketchpencil.h"

SketchPencil::SketchPencil(QObject *parent, int size, Qt::GlobalColor colour) : QObject(parent)
{
    pencilSize = size;
    pencilColour = colour;

    brush = new QBrush;
    brush->setColor(colour);

}

SketchPencil::~SketchPencil()
{

}

