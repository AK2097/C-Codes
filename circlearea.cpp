#include<iostream>

int main()
{
    float area, radius;
    std::cout<<"enter the radius of a circle:";
    std::cin>>radius;
    area = 3.14 * radius * radius;
    std::cout<<"area of a circle is" << area;
    return 0;

}