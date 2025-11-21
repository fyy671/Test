#include <iostream>
#include "Calculator.h"
#include "AdvancedMath.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

void demonstrateAdvancedMath() {
    AdvancedMath advMath;

    cout << "\n--- Advanced Mathematics ---" << endl;
    cout << "Square root of 16: " << advMath.squareRoot(16) << endl;
    cout << "Natural log of 10: " << advMath.naturalLog(10) << endl;
    cout << "Sine of PI/2: " << advMath.sine(M_PI / 2) << endl;

    auto fib = advMath.fibonacciSequence(10);
    cout << "First 10 Fibonacci numbers: ";
    for (int num : fib) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    cout << "Hello Git!" << endl;
    
    Calculator calc;
    cout << "5 + 3 = " << calc.add(5, 3) << endl;
    cout << "10 - 4 = " << calc.subtract(10, 4) << endl;
   
    demonstrateAdvancedMath();
    return 0;
}