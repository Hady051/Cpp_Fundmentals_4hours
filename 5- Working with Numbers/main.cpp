#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << 17 << endl;
    cout << 5 + 7 << endl;
    cout << 4 + 5 * 10 << endl;
    cout << (4 + 5) * 10 << endl;

    int wnum = 5;
    double dnum = 5.5;

    cout << wnum + dnum << endl;
    cout << 10.0 / 3.0 << endl;

    // cmath

    cout << pow(3, 2) << endl;
    cout << sqrt(16) << endl;
    cout << round(3.6) << endl;
    cout << round(3.2) << endl;
    cout << ceil(3.2) << endl;
    cout << floor(3.7) << endl;
    cout << fmax(2, 8) << endl; // tells you which number is bigger
    cout << fmin(4, 19) << endl;

    return 0;
}
