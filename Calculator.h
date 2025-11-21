#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

class Calculator {
public:
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    double divide(int a, int b);
    int power(int base, int exponent);
    int factorial(int n);
    bool isPrime(int number);

private:
    void logOperation(const std::string& operation);
};

#endif