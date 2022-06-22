#include <iostream>
#include "Point.h";
#include "MyWindow.h";

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    //создание объекта
    MyWindow A(10, 10);
    A.Show();
    //изменение параметров
    A.GetX()= 5;
    A.GetY() = 3;
    A.GetWidth() = 40;
    A.GetHeight() = 50;
    A.Show();
    //сдвиг "окна"
    A.MoveX(2);
    A.MoveY(7);
    A.Show();
}

