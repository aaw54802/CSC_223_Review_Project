#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template <class T> //makes class generic
class PointType
{
private:
	T x;
	T y;

public:
	//Default Constructor
	PointType() { x = 0, y = 0;  cout << fixed << setprecision(1) << showpoint; }

	//Constructor with Parameters
	PointType(T UserX, T UserY) : x(UserX), y(UserY) { cout << fixed << setprecision(1) << showpoint; }

	//Setters
	void setX(T UserX) { x = UserX; }
	void setY(T UserY) { y = UserY; }
	void setPoint(T UserX, T UserY) {
		x = UserX;
		y = UserY;
	}

	//Getters
	T getX() { return x; }
	T getY() { return y; }
	void getPoint(T& UserX, T& UserY) {
		UserX = x;
		UserY = y;
	}

	double operator -(PointType<T> op2) {
		double distance = sqrt(pow(x - op2.x, 2) + pow(y - op2.y, 2));
		return distance;
	}

	//print
	void print()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}


};

