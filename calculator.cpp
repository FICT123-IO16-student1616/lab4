// calculator.cpp
#include "calculator.h"

#include <iostream>

Calculator::Calculator() {
    std::cout << "Calculator object created." << std::endl;
}

Calculator::~Calculator() {
    std::cout << "Calculator object destroyed." << std::endl;
}

double Calculator::add(double a, double b) {
    return a + b;
}
