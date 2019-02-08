#ifndef CYLINDER_H
#define CYLINDER_H
#include "ThreeD_Shapes.h"

class Cylinder : public ThreeD_Shapes
{
    private :
        double height ;
    public:
        Cylinder();
        Cylinder(double h, double r, string c)  ;
        void setHeight(double h) ;
        double getHeight() ;
        double calcArea()  ;
        double calcVolume() ;

};

#endif // CYLINDER_H
