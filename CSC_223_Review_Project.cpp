// CSC_223_Review_Project.cpp : This file contains the code for the Review Project which will be on three branches
//Braches: PointType, CircleType, & CylinderType
//

#include <iostream>
#include "CircleType.h"

using namespace std;

int main()
{
    cout << "Default Constructor Test" << endl;
    CircleType<int> CirONE;
    cout << "Center Point: ";
    CirONE.printCentPoint();
    cout << "Circumfrence Point: ";
    CirONE.printCircPoint();
    cout << "Analysis Circle Data: \n";
    CirONE.wholePrint();
    

    
    cout << "\nConstructor with Parameters Test" << endl;
    CircleType<double> CirTWO(7.8, 3.4, 2.4, -9.0);
    cout << "Center Point: ";
    CirTWO.printCentPoint();
    cout << "Circumfrence Point: ";
    CirTWO.printCircPoint();
    cout << "Analysis Circle Data: \n";
    CirTWO.wholePrint();

    cout << "\nCenter and circumfrence Set Test" << endl;
    CirONE.setCentPoint(1, 2);
    CirONE.setCircPoint(3, 4);
    cout << "Center Point: ";
    CirONE.printCentPoint();
    cout << "Circumfrence Point: ";
    CirONE.printCircPoint();
    cout << "Analysis Circle Data: \n";
    CirONE.wholePrint();

    cout << "\nCenter and Circumfrence Get Test" << endl;
    double xCent, yCent, xCirc, yCirc;
    CirTWO.getCentPoint(xCent, yCent);
    CirTWO.getCircPoint(xCirc, yCirc);
    cout << "xCent = " << xCent << " | yCent = " << yCent << " | xCirc = " << xCirc << " | yCirc = " << yCirc << endl;

}