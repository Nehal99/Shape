#ifndef SHAPE_H
#define SHAPE_H
#include <string>

using namespace std ;

class Shape
{
    protected:
        string color ;
    public:
        Shape() ;
        Shape(string c) ;

        void setColor(string c) ;
        string getColor() ;
        virtual double calcArea() = 0 ;
        virtual double calcVolume () = 0 ;
};

#endif // SHAPE_H
