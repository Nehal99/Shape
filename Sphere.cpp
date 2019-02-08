#include "Sphere.h"

Sphere::Sphere()
{
    radius = 0 ;
    surfaceArea = 0 ;
    volume = 0 ;
}
Sphere:: Sphere (double x, string y) :ThreeD_Shapes(x, y)
{

}
double Sphere::calcArea()
{
    return surfaceArea = 4 * 3.14 * radius * radius;
}
double Sphere:: calcVolume()
{
    return volume = (4 * 3.14 * radius * radius * radius) / 3;
}
