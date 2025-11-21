#ifndef ADVANCEDMATH_H
#define ADVANCEDMATH_H

#include <cmath>
#include <vector>

class AdvancedMath {
public:
    static double squareRoot(double x);
    static double naturalLog(double x);
    static double sine(double x);
    static double cosine(double x);
    static std::vector<int> fibonacciSequence(int count);
};

#endif