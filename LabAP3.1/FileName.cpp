#include <iostream>
#include <cmath> // ��� ������������ ������������ �������

int main() {
    double x, y1, y2;

    // �������� �������� x � ���������
    std::cout << "������ �������� x: ";
    std::cin >> x;

    // ����� 1: ��������� ����� �������� ��������� (��������� ��������)
    y1 = (x < 0) ? std::sin(x) : ((0 <= x && x <= 1) ? (x * x + std::exp(x)) : std::cos(x));

    // ����� 2: ����� ����� �������� ��������� (if-else)
    if (x < 0) {
        y2 = std::sin(x);
    }
    else if (0 <= x && x <= 1) {
        y2 = x * x + std::exp(x);
    }
    else {
        y2 = std::cos(x);
    }

    // ��������� ����������
    std::cout << "�������� y (��������� �����): " << y1 << std::endl;
    std::cout << "�������� y (����� �����): " << y2 << std::endl;

    return 0;
}
