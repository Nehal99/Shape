#include "Square.h"
#include <iostream>

using namespace std ;

Square::Square()
{
    line = 0 ;
    area = 0 ;
}
Square::Square (double x, string y) :TwoD_Shapes(x, y)
{

}
double Square:: calcArea()
{
    return area = line * line;
}
double Square:: calcVolume()
{
    cout << " Square has no volume " << endl ;
}
