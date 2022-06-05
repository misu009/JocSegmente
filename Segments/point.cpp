#include "point.h"

Point::Point(){
}

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
    this->status = FREE;
}

int Point::getX() const {

    return this->x;
}

int Point::getY() const {

    return this->y;
}

void Point::setStatus(Status status) {
    this->status = status;
}

Point::Status Point::getStatus() const {

    return status;
}

bool Point::isClicked (int x, int y) const {

    if (abs(x - this->x) > DEFAULT_RADIUS) return false;
    if (abs(y - this->y) > DEFAULT_RADIUS) return false;

    int distanceFromCenterSquad = (x - this->x) * (x - this->x) - (y - this->y) * (y - this->y);

    return distanceFromCenterSquad <= DEFAULT_RADIUS * DEFAULT_RADIUS;
}

void Point::Paint(int color) const {

    setcolor(color);
    circle(x, y, DEFAULT_RADIUS);
    setfillstyle(SOLID_FILL, color);
    floodfill(x, y, color);
}
