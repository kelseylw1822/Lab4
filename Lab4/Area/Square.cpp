#include "Square.h"

Square::Square() {} ;

Square::Square(double s) : side(s) {} ;

bool Square::setSide(double s)
{
if (s >= 0)
{
        side = s;
        return true;
    }
    else
    {
        return false;
    }
}
double Square::getSide()
{
    return side;
}
double Square::calcArea()
{
    return side * side;
}
