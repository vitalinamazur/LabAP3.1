// Lab_03_1.cpp
// <����� ³�����>
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 19

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
	// ����� 1: ������������ � ��������� ����
	if (x < -1)
		B = sin(x) / (1 + cos(x * x));
	if (-1 <= x && x <= 1)
		B = pow(cos(x), 2) * pow(sin(x), 2) - 1;
	if (x > 1)
		B = log10(x + 0.4);
	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
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
