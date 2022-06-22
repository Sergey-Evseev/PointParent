#pragma once
#include <iostream>
#include "Point.h";
using namespace std;

class MyWindow:public Point {
	int width;
	int height;
	
public:
	MyWindow(int W, int H) {
		width = W;
		height = H;
		cout << "Конструктор MyWindow" << endl;
	}
	~MyWindow() { cout << "Деструктор MyWindow" << endl; }

	//получение ширины
	int& GetWidth() {
		return width;
	}
	//получение высоты
	int& GetHeight() {
		return height;
	}
	//функции сдвига
	void MoveX(int DX) {
		x += DX;
	}
	void MoveY(int DY) {
		y = DY;
	}
	//показ на экран
	void Show() {
		cout << "--------------\n";
		cout << "X = " << x << "\n";
		cout << "Y = " << y << "\n";
		cout << "W = " << width << "\n";
		cout << "H = " << height << "\n";
		cout << "--------------\n";
	}

};