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
		cout << "�������� ����������� Point" << endl;
	}
	//����������� ���.������ � �����������//
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}


	~Point() {
		cout << "���������� Point" << endl;
	}
	//��������� �
	int& GetX() {
		return x;
	}
	//��������� y
	int& GetY() {
		return y;
	};
};

