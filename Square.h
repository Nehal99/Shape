#ifndef SQUARE_H
#define SQUARE_H
#include "TwoD_Shapes.h"

class Square :  public TwoD_Shapes
{
    public:
        Square();
        Square (double x, string y)  ;
        double calcArea() ;
        double calcVolume() ;
};

#endif // SQUARE_H
