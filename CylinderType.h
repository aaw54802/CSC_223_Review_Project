#pragma once
#include "CircleType.h"
#include <iostream>  // Required for cout
using namespace std;

template <class T>
class CylinderType : public CircleType<T>
{
public:
    // Constructors
    CylinderType();
    CylinderType(T, T, T, T, T);
    CylinderType(PointType<T>, PointType<T>, T);

    // Setter and getter for height
    void setHeight(T);
    T getHeight();

    // Calculations
    double calcSurfArea();
    double calcVol();

    // Print function
    void print();

private:
    T height;
};

// Constructor implementations
template <class T>
CylinderType<T>::CylinderType() : CircleType<T>(), height(0) {}

template <class T>
CylinderType<T>::CylinderType(T xCent, T yCent, T xBase, T yBase, T h)
    : CircleType<T>(xCent, yCent, xBase, yBase), height(h) {}

template <class T>
CylinderType<T>::CylinderType(PointType<T> cent, PointType<T> base, T h)
    : CircleType<T>(cent.getX(), cent.getY(), base.getX(), base.getY()), height(h) { }



// Setter and getter implementations
template <class T>
void CylinderType<T>::setHeight(T h)
{
    height = h;
}

template <class T>
T CylinderType<T>::getHeight()
{
    return height;
}

// Calculation implementations
template <class T>
double CylinderType<T>::calcSurfArea()
{
    double surf = static_cast<double>(this->calcCirc()) * static_cast<double>(height) + 2 * static_cast<double>(this->calcArea());
    return surf;
}

template <class T>
double CylinderType<T>::calcVol()
{
    double vol = static_cast<double>(height) * static_cast<double>(this->calcArea());
    return vol;
}

// Print function
template <class T>
void CylinderType<T>::print()
{
    CircleType<T>::wholePrint();
    cout << "Surface Area: " << calcSurfArea() << endl;
    cout << "Volume: " << calcVol() << endl;
}