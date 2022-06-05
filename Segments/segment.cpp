#include "segment.h"

Segment::Segment() {}

Segment::Segment (Point a, Point b) {

    this->a = a;
    this->b = b;
}

Point Segment::getA() const {

    return this->a;
}

Point Segment::getB() const {

    return this->b;
}

void Segment::Paint(int color) const {

    setcolor(color);
    line(a.getX(), a.getY(), b.getX(), b.getY());
}

