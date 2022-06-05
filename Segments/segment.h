#ifndef H_SEGMENT
#define H_SEGMENT

#include "point.h"
#include "graphics.h"

class Segment
{
public:
    Segment();
    Segment(Point a, Point b);
    Point getA() const;
    Point getB() const;

    void Paint(int color) const;

private:
    Point a;   // first point
    Point b;  // second point
};


#endif // H_SEGMENT
