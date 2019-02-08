#include "Cylinder.h"

Cylinder::Cylinder()
{
    height = 0;
    radius = 0 ;
    surfaceArea = 0 ;
    volume = 0 ;
}
Cylinder::Cylinder(double h, double r, string c) : ThreeD_Shapes(r,c)
{
    height = h;
}
void Cylinder:: setHeight(double h)
{
    height = h;
}
double Cylinder:: getHeight()
{
    return height ;
}
double Cylinder:: calcArea()
{
    return surfaceArea = (2 * 3.14 * radius * height) + (2 * 3.14 * radius * radius);
}
double Cylinder:: calcVolume()
{
    return volume = 3.14 * radius * radius * height ;
}
