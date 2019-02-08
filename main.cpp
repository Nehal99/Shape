// Course:  CS213 - Programming II  - 2018
// Title:   Assignment II - Task 2 - Problem 8
// Program: Shapes
// Purpose:  calculate Area and volume of some shapes
// Author:  Nehal Akram Ahmed
// Date:    15 October  2018
// Version: 1.0

#include <iostream>
#include "Shape.h"
#include "TwoD_Shapes.h"
#include "ThreeD_Shapes.h"
#include "Square.h"
#include "Sphere.h"
#include "Cylinder.h"
#include "Circle.h"

using namespace std;

int main()
{
    int x, y;
    double r , h ;
    string c ;
    cout << " Enter number of shapes: ";
    cin >> x;

    Shape** s = new Shape*[x];

    for (int i = 0; i < x; i++)
    {
        cout << " Choose your shape " << endl << " 1- Circle " << endl << " 2- Square " << endl
             << " 3- Sphere " << endl << " 4- Cylinder " << endl ;
        cin >> y;

        if (y == 1)
        {
            cout << " Enter Color : " ;
            cin >> c ;
            cout << " Enter Radius : " ;
            cin >> r ;

            s[i] = new Circle(r,c);

            cout << "Color is " << s[i]->getColor() << endl ;
            cout << "Area of Circle = " << s[i]->calcArea() << endl ;

        }
        if (y == 2)
        {
            cout << " Enter Color : " ;
            cin >> c ;
            cout << " Enter Side : " ;
            cin >> r ;

            s[i] = new Square(r,c);

            cout << "Color is " << s[i]->getColor() << endl ;
            cout << "Area of Square = " << s[i]->calcArea() << endl ;
        }
        if (y == 3)
        {
            cout << " Enter Color : " ;
            cin >> c ;
            cout << " Enter Radius : " ;
            cin >> r ;

            s[i] = new Sphere (r,c);

            cout << "Color is " << s[i]->getColor() << endl ;
            cout << "Area of Sphere = " << s[i]->calcArea() << endl ;
            cout << "Volume of Sphere = " << s[i]->calcVolume() <<endl ;
        }
        if (y == 4)
        {
            cout << " Enter Color : " ;
            cin >> c ;
            cout << " Enter Radius : " ;
            cin >> r ;
            cout << " Enter Height : " ;
            cin >> h ;

            s[i] = new Cylinder (h,r,c);

            cout << "Color is " << s[i]->getColor() << endl ;
            cout << " Surface Area of Cylinder = " << s[i]->calcArea() << endl ;
            cout << " Volume of cylinder = " << s[i]->calcVolume() << endl ;
        }
        cout << endl ;
    }

    for (int i = 0 ; i < x ; i++)
    {
        delete s[i] ;
    }
    delete [] s ;

}

