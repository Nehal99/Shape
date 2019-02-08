#include "TwoD_Shapes.h"

TwoD_Shapes::TwoD_Shapes()
{
    line = 0;
    area = 0;
}
TwoD_Shapes::TwoD_Shapes(int l, string c) : Shape(c)
{
    line = l ;
}

void TwoD_Shapes:: setLine(double l)
{
    line = l ;
}
double TwoD_Shapes::getline()
{
    return line ;
}
double TwoD_Shapes:: getArea()
{
    return area ;
}
