// CircleType Class.cpp : This file contains the code and a separate test program for the CircleType class.


#include <iostream>
#include "CylinderType.h"

int main()
{
    cout << "Test CylinderType with integers" << endl;

    cout << "Default constructor (cylONE): ";
    CylinderType<int> cylONE;
    cout << "   Center Point: ";
    cylONE.printCentPoint();
    cout << "   Circumference Point: ";
    cylONE.printCircPoint();
    cout << "   Height: " << cylONE.getHeight();
    cout << endl << endl;

    cout << "Constructor with coordinates (cylTWO): ";
    CylinderType<int> cylTWO(5, 3, -4, 0, 8);
    cout << "   Center Point: ";
    cylTWO.printCentPoint();
    cout << "   Circumference Point: ";
    cylTWO.printCircPoint();
    cout << "    Height: " << cylTWO.getHeight();
    cout << endl << endl;

    cout << "Constructor with points (cylTHREE): ";
    PointType<int> centPoint(2, 0);
    PointType<int> circPoint(0, -2);
    int height = 6;
    CylinderType<int> cylTHREE(centPoint, circPoint, height);
    cout << "   Center Point: ";
    cylTHREE.printCentPoint();
    cout << "   Circumference Point: ";
    cylTHREE.printCircPoint();
    cout << "   Height: " << cylTHREE.getHeight();
    cout << endl << endl;

    cout << "Test setCentPoint, setCircPoint, and setHeight with cylONE: ";
    cylONE.setCentPoint(5, 3);
    cylONE.setCircPoint(0, 3);
    cylONE.setHeight(4);

    cout << "   Center Point: ";
    cylONE.printCentPoint();
    cout << "   Circumference Point: ";
    cylTWO.printCircPoint();
    cout << "   Height: " << cylTWO.getHeight();
    cout << endl << endl;

    cout << "Test getCentPoint, getCircPoint, and getHeight with cylONE: ";
    int xCent, yCent, xCirc, yCirc;
    cylONE.getCentPoint(xCent, yCent);
    cylONE.getCircPoint(xCirc, yCirc);
    height = 9;
    cout << "   Center Point: ";
    cylONE.printCentPoint();
    cout << "   Circumference Point: ";
    cylONE.printCircPoint();
    cout << "   Height: " << cylONE.getHeight();
    cout << endl << endl;
    cout << "Radius from cylONE: " << cylONE.calcRad() << endl;
    cout << "Area from cylONE " << cylONE.calcArea() << endl;
    cout << "Circumference from cylONE: " << cylONE.calcCirc() << endl;
    cout << "Surface Area from cylONE: " << cylONE.calcSurfArea() << endl;
    cout << "Volume from cylONE: " << cylONE.calcVol() << endl;
    cout << endl;

    cout << "Testing the print function for cylTWO: " << endl;
    cylTWO.print();
    cout << endl << endl;


    cout << endl << "Test CircleType with real numbers: " << endl;
    cout << "Default constructor (cylFOUR): ";
    CylinderType<double> cylFOUR;
    cout << "   Center Point: ";
    cylFOUR.printCentPoint();
    cout << "   Circumference Point: ";
    cylFOUR.printCircPoint();
    cout << "   Height: " << cylFOUR.getHeight();
    cout << endl << endl;

    cout << "Constructor with coordinates (cylFIVE): ";
    CylinderType<double> cylFIVE(5.1, 3.3, -4.6, 0, 3.7);
    cout << "   Center Point: ";
    cylFIVE.printCentPoint();
    cout << "   Circumference Point: ";
    cylFIVE.printCircPoint();
    cout << "   Height: " << cylFIVE.getHeight();
    cout << endl << endl;

    cout << "Constructor with points (cylSIX): ";
    PointType<double> centPoint2(2, 0);
    PointType<double> circPoint2(0, -2);
    double h2 = 5.2;
    CylinderType<double> cylSIX(centPoint2, circPoint2, h2);
    cout << "   Center Point: ";
    cylSIX.printCentPoint();
    cout << "   Circumference Point: ";
    cylSIX.printCircPoint();
    cout << "   Height: " << h2;
    cout << endl << endl;

    cout << "Test setCentPoint, setCircPoint and setHeight with cylFOUR: ";
    cylFOUR.setCentPoint(5, 3);
    cylFOUR.setCircPoint(0, 3);
    cylFOUR.setHeight(6);
    cout << "   Center Point: ";
    cylFOUR.printCentPoint();
    cout << "   Circumference Point: ";
    cylFOUR.printCircPoint();
    cout << "   Height: " << cylFOUR.getHeight();
    cout << endl << endl;

    cout << "Test getCentPoint, getCircPoint, and getHeight with cylFOUR: ";
    double xCent2, yCent2, xCirc2, yCirc2;
    cylFOUR.getCentPoint(xCent2, yCent2);
    cylFOUR.getCircPoint(xCirc2, yCirc2);
    h2 = cylFOUR.getHeight();
    cout << "   Center Point: ";
    cylFOUR.printCentPoint();
    cout << "   Circumference Point: ";
    cylFOUR.printCircPoint();
    cout << "   Height: " << h2;
    cout << endl << endl;

    cout << "Radius from cylFOUR: " << cylFOUR.calcRad() << endl;
    cout << "Area from cylFOUR " << cylFOUR.calcArea() << endl;
    cout << "Circumference from cylFOUR: " << cylFOUR.calcCirc() << endl;
    cout << "Surface Area from cylFOUR: " << cylFOUR.calcSurfArea() << endl;
    cout << "Volume from cylFOUR: " << cylFOUR.calcVol() << endl;
    cout << endl;

    cout << "Testing the print function for cylFIVE: " << endl;
    cylFIVE.print();
    cout << endl << endl;



    return 0;

}