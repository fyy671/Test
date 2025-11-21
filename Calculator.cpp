#include "Calculator.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int Calculator::add(int a, int b) {
    logOperation("Addition");
    return a + b;
}

int Calculator::subtract(int a, int b) {
    logOperation("Subtraction");
    return a - b;
}

int Calculator::multiply(int a, int b) {
    logOperation("Multiplication");
    return a * b;
}

double Calculator::divide(int a, int b) {
    logOperation("Division");
    if (b == 0) {
        throw runtime_error("Division by zero!");
    }
    return static_cast<double>(a) / b;
}

int Calculator::power(int base, int exponent) {
    logOperation("Power");
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int Calculator::factorial(int n) {
    logOperation("Factorial");
    if (n < 0) throw runtime_error("Factorial of negative number!");
    if (n == 0 || n == 1) return 1;

    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

bool Calculator::isPrime(int number) {
    logOperation("Prime Check");
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;

    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

void Calculator::logOperation(const string& operation) {
    cout << "Performing " << operation << " operation" << endl;
}