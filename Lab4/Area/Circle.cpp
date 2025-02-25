#include "Circle.h"

Circle::Circle() {} ;

Circle::Circle(double r) : radius(r) {} ;

bool Circle::setRadius(double r)
{
    if (r >= 0)
    {
        radius = r;
        return true;
    }
    else
    {
        return false;
    }
}

double Circle::getRadius()
{
    return radius;
}

double Circle::calcArea()
{
    return M_PI * pow(radius, 2.0);
}
