#include "phasorview.h"

PhasorView::PhasorView(QObject *parent)
{
    this->setMinimumSize(PHASOR_VIEW_WIDTH, PHASOR_VIEW_WIDTH);
    this->setDragMode(QGraphicsView::RubberBandDrag);
    this->setRenderHint(QPainter::Antialiasing);
    this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}