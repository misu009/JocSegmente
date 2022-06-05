#ifndef H_GENERATOR
#define H_GENERATOR

#include <vector>
#include "point.h"
#include <ctime>
#include <cstdlib>
#include "config.h"

using namespace std;

class Generator{
public:
    Generator();
    vector<Point> generatePoints(int numberOfPoints);
    int NumberOfPoints();
private:
    Point generatePoint();
};

#endif // H.GENERATOR
