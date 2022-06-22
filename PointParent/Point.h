#pragma once
#include <iostream>
using namespace std;

class Point
{
protected:
	int x;
	int y;
public:
	Point() {
		x = 0;
		y = 0;
		cout << "—оздалс€ конструктор Point" << endl;
	}
	//конструктор род.класса с параметрами//
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}


	~Point() {
		cout << "ƒеструктор Point" << endl;
	}
	//получение х
	int& GetX() {
		return x;
	}
	//получение y
	int& GetY() {
		return y;
	};
};

