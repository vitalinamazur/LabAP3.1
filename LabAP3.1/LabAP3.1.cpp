// Lab_03_1.cpp
// <Мазур Віталіни>
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 19

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B; 
	cout << "x = "; cin >> x;

	A = 2 * x - 13.5;
	// спосіб 1: розгалуження в скороченій формі
	if (x < -1)
		B = sin(x) / (1 + cos(x * x));
	if (-1 <= x && x <= 1)
		B = pow(cos(x), 2) * pow(sin(x), 2) - 1;
	if (x > 1)
		B = log10(x + 0.4);
	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// спосіб 2: розгалуження в повній формі
	if (x < -1)
		B = sin(x) / (1 + cos(x * x));
	else
		if (-1 <= x && x <= 1)
			B = pow(cos(x), 2) * pow(sin(x), 2) - 1;
		else
			B = log10(x + 0.4);
	y = A + B;

	cout << endl;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
