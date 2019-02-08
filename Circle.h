#ifndef CIRCLE_H
#define CIRCLE_H
#include "TwoD_Shapes.h"

class Circle : public TwoD_Shapes
{
    public:
        Circle();
        Circle(int x, string y) ;
        double calcArea() ;
        double calcVolume() ;
};

#endif // CIRCLE_H
