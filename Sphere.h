#ifndef SPHERE_H
#define SPHERE_H
#include "ThreeD_Shapes.h"

class Sphere :  public ThreeD_Shapes
{
    public:
        Sphere();
        Sphere (double x, string y) ;
        double calcArea() ;
        double calcVolume() ;
};

#endif // SPHERE_H
