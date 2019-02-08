#ifndef TWOD_SHAPES_H
#define TWOD_SHAPES_H
#include "Shape.h"

class TwoD_Shapes : public Shape
{
    protected:
        double line;
        double area;
    public:
        TwoD_Shapes() ;
        TwoD_Shapes(int l, string c) ;

        void setLine(double l) ;
        double getline() ;
        double getArea() ;

        virtual double calcArea() = 0 ;
        virtual double calcVolume () = 0 ;

};

#endif // TWOD_SHAPES_H
