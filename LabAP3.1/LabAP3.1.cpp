// Lab_03_1.cpp
//  Мазур Віталіни
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 19
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = x * x;
	// спосіб 1: розгалуження в скороченій формі
	if (x < 0)
		B = sin(x);
	if (0 <= x && x <= 1)
		B = exp(x);
	if (x > 1)
		B = cos(x);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < 0)
		B = sin(x);
	else
		if (x > 1)
			B = cos(x);
		else
			B = exp(x);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
