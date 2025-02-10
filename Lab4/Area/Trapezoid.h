#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid
{
private:
    double base1 = 1.0 ;
    double base2 = 1.0 ;
    double height = 1.0 ;
public:
    Trapezoid() ;
    Trapezoid(double b1, double b2, double h) ;
    bool setBase1(double b1);
    bool setBase2(double b2);
    bool setHeight(double h);
    double getBase1();
    double getBase2();
    double getHeight();
    double calcArea();
};

#endif
