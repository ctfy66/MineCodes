#include "rectangle.h"
#include <iostream>
int main()
{
    Rectangle rect1 (5.0,8.0);
    Rectangle rect2;
    Rectangle rect3 (rect2);
    cout<<"rect1 is ";
    rect1.get_size();
    cout<<"rect2 area is "<<rect2.get_area()<<endl;
    cout<<"rect3 perimeter is "<<rect3.get_perimeter()<<endl;
    return 0;
}