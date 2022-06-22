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
		cout << "Создался конструктор Point" << endl;
	}
	~Point() {
		cout << "Деструктор Point" << endl;
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

