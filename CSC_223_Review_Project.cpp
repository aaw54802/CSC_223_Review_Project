// CSC_223_Review_Project.cpp : This file contains the code for the Review Project which will be on three branches
//Braches: PointType, CircleType, & CylinderType
//

#include <iostream>
#include "PointType.h"

using namespace std;

int main()
{
    cout << "From default constructor" << endl;
    PointType<int> p1I;
    PointType<double> p1D;
    cout << "Integer point";
    p1I.print();
    cout << "Double point";
    p1D.print();

    cout << "\nFrom constructor with Parameter" << endl;
    PointType<int> p2I(3,5);
    PointType<double> p2D(3.5, 3.5);
    cout << "Integer point";
    p2I.print();
    cout << "Double point";
    p2D.print();

    cout << "\nInt Distance =";
    double distance = p1I - p2I;
    cout << distance << endl;

    cout << "\nDoub Distance =";
    distance = p1D - p2D;
    cout << distance << endl;

}

