#include <iostream>
#include <cmath>

using namespace std;


double cubicRoot(double number) {
    double result = cbrt(number);
    // or
    // double result = number * number * number;

    return result;
}

double power(double base, double exponent) {
    double result = pow(base, exponent);
    // or:
    // double result = base * base * base;

    return result;
    cout << "Hello" << endl; // won't get executed because it's after the return keyword
}

int main()
{
    int random_number = 2;
    double cubicRootSolution;
    double powerSolution;

    cubicRootSolution = cubicRoot(random_number);
    cout << "Cubic root of " << random_number << " is: " << cubicRootSolution << endl;

    powerSolution = power(random_number, 3);
    cout << "Cube Power of " << random_number << " is: " << powerSolution << endl;

    return 0;
}