#include <iostream>
#include <cmath>
#include <string.h>
#include <stdio.h>
#include <math.h>
double midpoint() {
    // reads in user input for lower and upper limits, N value, and function
    double a, b, n, firstCoeff, secondCoeff, thirdCoeff;
    std::string userFunction;
    std::cout << "Enter a value for A." << "\n";
    std::cin >> a;
    
    std::cout << "Enter a value for B." << "\n";
    std::cin >> b;

    std::cout << "Enter a value for N." << "\n";
    std::cin >> n;

    std::cout << "_X^2 + _X + _" << "\n";
    std::cout << "Enter your first value." << "\n";
    std::cin >> firstCoeff;
    
    std::cout << "Enter your second value." << "\n";
    std::cin >> secondCoeff;
    
    std::cout << "Enter your third value." << "\n";
    std::cin >> thirdCoeff;
    // convert coefficients to long long values

    double d = (b-a)/n;
    // std::cout << d;
    double s = 0;
    double x = a + (d/2);
    for (int i = 1; i < n; i++) {
        s += (firstCoeff*pow(x, 2)) + (secondCoeff*x) + thirdCoeff;
        x += d;
        // std::cout << s << " ";
    }
    std::cout << s*d << "\n";
    return 1.0;
}
int main() {
    midpoint();
    return 0;
}