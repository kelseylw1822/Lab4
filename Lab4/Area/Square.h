#ifndef SQUARE_H
#define SQUARE_H

class Square
{
private:
    double side = 1.0;
public:
    Square();
    Square(double s) : side(s) {} ;
    bool setSide(double s);
    double getSide();
    double calcArea();
};

#endif
