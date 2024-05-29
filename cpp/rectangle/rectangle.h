#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "rectangle.h"
using namespace std;
class Rectangle 
{
    private:
    double length,height;
    public:
    Rectangle();
    Rectangle(double length,double height);
    Rectangle(const Rectangle& rect);
    ~Rectangle();
    void get_size()const;
    double get_area()const;
    double get_perimeter()const;

};
#endif