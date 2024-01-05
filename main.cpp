// main.cpp
#include "calculator.h"

#include <iostream>

int main() {
    Calculator calc;

    double num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    double result = calc.add(num1, num2);

    std::cout << "Sum: " << result << std::endl;

    return 0;
}
