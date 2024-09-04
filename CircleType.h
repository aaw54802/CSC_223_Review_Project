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
	//Constructor with Parameters
	CircleType(PointType<T>, PointType<T>);


	//Setters
	void setCentPoint(T, T); //set coord for radius
	void setCircPoint(T, T); //set coord for circumfrenece

	//Getters
	PointType<T> getCentPoint(); //get coord for radius
	PointType<T> getCircPoint(); //set coord for circumfrenece

	//Print
	void printtCentPoint(); //prints coord for radius
	void printtCircPoint(); //prints coord for circumfrenece

	//Calculate
	double calcRad();
	double clacArea();
	double calcCirc();

	//Whole Print
	void print();

private:
	PointType<T> centPoint;
	PointType<T> circPoint;


};

template <class T>
const double CircleType<T>::pi = 3.14159;

template <class T>
CircleType<T>::CircleType() : centPoint(), circPoint() {}

template <class T>
CircleType<T>::CircleType(T xCent, T yCent, T xCirc, T yCirc) : centPoint(xCent, yCent), circPoint(xCirc, yCirc) {}

template <class T>
CircleType<T>::CircleType(PointType<T> cent, PointType<T> circ) : centPoint(cent), circPoint(circ) {}


