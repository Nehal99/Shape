#include "ThreeD_Shapes.h"

ThreeD_Shapes::ThreeD_Shapes()
{
    radius = 0;
    surfaceArea = 0;
    volume = 0;
}
ThreeD_Shapes::ThreeD_Shapes(double r, string c) : Shape(c)
{
     radius = r;
}
void ThreeD_Shapes::setRadius(double r)
{
     radius = r;
}
double ThreeD_Shapes::getRadius()
{
    return radius ;
}
double ThreeD_Shapes::getArea()
{
    return surfaceArea ;
}
double ThreeD_Shapes:: getVolume()
{
    return volume ;
}
