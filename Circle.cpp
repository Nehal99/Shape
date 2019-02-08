#include "Circle.h"
#include <iostream>

using namespace std ;

Circle::Circle()
{
    line = 0 ;
    area = 0 ;
}
Circle:: Circle(int x, string y) :TwoD_Shapes(x, y)
{

}
double Circle:: calcArea()
{
    return area = 3.14 * line * line ;
}
double Circle:: calcVolume()
{
    cout << " Circle has no volume " << endl ;
}
