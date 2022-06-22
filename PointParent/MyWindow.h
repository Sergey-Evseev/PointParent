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
		cout << "����������� MyWindow" << endl;
	}
	~MyWindow() { cout << "���������� MyWindow" << endl; }

	//��������� ������
	int& GetWidth() {
		return width;
	}
	//��������� ������
	int& GetHeight() {
		return height;
	}
	//������� ������
	void MoveX(int DX) {
		x += DX;
	}
	void MoveY(int DY) {
		y = DY;
	}
	//����� �� �����
	void Show() {
		cout << "--------------\n";
		cout << "X = " << x << "\n";
		cout << "Y = " << y << "\n";
		cout << "W = " << width << "\n";
		cout << "H = " << height << "\n";
		cout << "--------------\n";
	}

};