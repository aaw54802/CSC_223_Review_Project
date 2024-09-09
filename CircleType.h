#pragma once
#include "PointType.h"

template <class T>
class CircleType
{
public:
	// Define Stataic const varible of Pi
	static const double pi;

	//Default Constructors
	CircleType();
	//Cobstructor with coordinates set in
	CircleType(T, T, T, T);


	//Setters
	void setCentPoint(T, T); //set coord for radius
	void setCircPoint(T, T); //set coord for circumfrenece

	//Getters
	void(getCentPoint(T& xCent, T& yCent)); //get coord for radius as seprate x and y
	void(getCircPoint(T& xCent, T& yCent)); //get coord for radius as seprate x and y

	//Print
	void printCentPoint(); //prints coord for radius
	void printCircPoint(); //prints coord for circumfrenece

	//Calculate
	double calcRad();
	double calcArea();
	double calcCirc();

	//Whole Print
	void wholePrint();

private:
	PointType<T> centPoint;
	PointType<T> circPoint;


};

template <class T>
const double CircleType<T>::pi = 3.14159;

//Constructors
template <class T>
CircleType<T>::CircleType() : centPoint(), circPoint() {}

template <class T>
CircleType<T>::CircleType(T xCent, T yCent, T xCirc, T yCirc) : centPoint(xCent, yCent), circPoint(xCirc, yCirc) {}


//Set
template <class T>
void CircleType<T>::setCentPoint(T xCent, T yCent)
{
	centPoint.setX(xCent);
	centPoint.setY(yCent);
}

template <class T>
void CircleType<T>::setCircPoint(T xCirc, T yCirc)
{
	circPoint.setX(xCirc);
	circPoint.setY(yCirc);
}

//Get
template <class T>
void CircleType<T>::getCentPoint(T& xCent, T& yCent)
{
	xCent = centPoint.getX();
	yCent = centPoint.getY();
}

template <class T>
void CircleType<T>::getCircPoint(T& xCirc, T& yCirc)
{
	xCirc = circPoint.getX();
	yCirc = circPoint.getY();
}

//Print
template <class T>
void CircleType<T>::printCentPoint()
{
	centPoint.print();
}

template <class T>
void CircleType<T>::printCircPoint()
{
	circPoint.print();
}

//Calculate
template <class T>
double CircleType<T>::calcRad()
{
	double rad = centPoint - circPoint;
	return rad;
}

template <class T>
double CircleType<T>::calcArea()
{
	double area = pi * calcRad() * calcRad();
	return area;
}

template <class T>
double CircleType<T>::calcCirc()
{
	double circ = pi * 2 * calcRad();
	return circ;
}

//Whole Print
template <class T>
void CircleType<T>::wholePrint()
{
	cout << "-The Radius of the Circle: " << calcRad() << endl;
	cout << "-The Area of the Circle: " << calcArea() << endl;
	cout << "-The Circumference of the Circle: " << calcCirc() << endl;
}