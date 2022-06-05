#include "generator.h"
#include <iostream>

using namespace std;

Generator::Generator()
{
    srand(time(NULL));
}

Point Generator::generatePoint()
{
    int randomX = rand() % WINDOW_WIDTH;
    int randomY = rand() % WINDOW_HEIGHT;

    return Point(randomX, randomY);
}

vector <Point> Generator::generatePoints(int numberOfPoints)
{
    vector <Point> points;

    while(numberOfPoints)
    {
        Point point = generatePoint();

        if (point.getX() >= WINDOW_WIDTH - DEFAULT_RADIUS || point.getX() <= DEFAULT_RADIUS ||
            point.getY() >= WINDOW_HEIGHT - DEFAULT_RADIUS || point.getY() <= DEFAULT_RADIUS)

            continue;

        bool ok = true;
        for (auto pnt: points){

            if (point.getX() >= pnt.getX() - DEFAULT_RADIUS && point.getX() <= pnt.getX() + DEFAULT_RADIUS)
                if (point.getY() >= pnt.getY() - DEFAULT_RADIUS && point.getY() <= pnt.getY() + DEFAULT_RADIUS) {

                    ok = false;
                    break;
                }

        }
        if (ok == true) {

            numberOfPoints--;
            points.push_back(point);
        }
    }
    return points;
}

int Generator::NumberOfPoints() {

    srand(time(NULL));
    int x = rand() % 20 + 5;
    return x;
}
