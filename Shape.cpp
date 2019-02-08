#include "Shape.h"

Shape::Shape()
{
    color = " No Entered Color ";
}
Shape :: Shape(string c)
{
    color = c ;
}
void Shape :: setColor(string c)
{
    color = c ;
}
string Shape :: getColor()
{
    return color ;
}
