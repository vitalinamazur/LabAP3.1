#include <iostream>
#include <cmath> // Для використання математичних функцій

int main() {
    double x, y1, y2;

    // Введення значення x з клавіатури
    std::cout << "Введіть значення x: ";
    std::cin >> x;

    // Спосіб 1: Скорочена форма умовного оператора (тернарний оператор)
    y1 = (x < 0) ? std::sin(x) : ((0 <= x && x <= 1) ? (x * x + std::exp(x)) : std::cos(x));

    // Спосіб 2: Повна форма умовного оператора (if-else)
    if (x < 0) {
        y2 = std::sin(x);
    }
    else if (0 <= x && x <= 1) {
        y2 = x * x + std::exp(x);
    }
    else {
        y2 = std::cos(x);
    }

    // Виведення результатів
    std::cout << "Значення y (скорочена форма): " << y1 << std::endl;
    std::cout << "Значення y (повна форма): " << y2 << std::endl;

    return 0;
}
