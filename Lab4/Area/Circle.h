#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>
class Circle
{
private:
    double radius = 1.0;
public:
    Circle();
    Circle(double r) : radius(r) {} ;
    bool setRadius(double r);
    double getRadius();
    double calcArea();
};

#endif
