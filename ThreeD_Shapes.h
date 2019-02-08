#ifndef THREED_SHAPES_H
#define THREED_SHAPES_H
#include "Shape.h"

class ThreeD_Shapes : public Shape
{
    protected:
        double radius;
        double surfaceArea;
        double volume;
    public:
        ThreeD_Shapes() ;
        ThreeD_Shapes(double r, string c) ;
        void setRadius(double r) ;
        double getRadius() ;
        double getArea() ;
        double getVolume() ;

        virtual double calcArea() = 0;
        virtual double calcVolume() = 0;
};

#endif // THREED_SHAPES_H
