#include"rectangle.h"
Rectangle::Rectangle()
{
    length=1.0;
    height=1.0;
}
Rectangle::Rectangle(double len,double hei)
{
   length=len;
   height=hei;
}

Rectangle::Rectangle (const Rectangle&rect)
{
    length=rect.length;
    height=rect.height;
}

Rectangle::~Rectangle()
{}

void Rectangle::get_size()const
{
    cout<<"is a rectangle of "<<length<<" by "<<height<<endl;
}
double Rectangle::get_area()const
{
    return length*height;
}
double Rectangle::get_perimeter()const
{
    return (length+height)*2;
}