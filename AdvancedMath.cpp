#include "AdvancedMath.h"
#include <vector>
#include <iostream>

using namespace std;

double AdvancedMath::squareRoot(double x) {
    if (x < 0) throw runtime_error("Cannot calculate square root of negative number");
    return sqrt(x);
}

double AdvancedMath::naturalLog(double x) {
    if (x <= 0) throw runtime_error("Natural log undefined for non-positive numbers");
    return log(x);
}

double AdvancedMath::sine(double x) {
    return sin(x);
}

double AdvancedMath::cosine(double x) {
    return cos(x);
}

vector<int> AdvancedMath::fibonacciSequence(int count) {
    if (count <= 0) return {};
    if (count == 1) return { 0 };
    if (count == 2) return { 0, 1 };

    vector<int> sequence = { 0, 1 };
    for (int i = 2; i < count; i++) {
        sequence.push_back(sequence[i - 1] + sequence[i - 2]);
    }
    return sequence;
}