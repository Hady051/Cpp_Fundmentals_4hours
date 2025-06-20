#include <iostream>

using namespace std;
// exponent function is the power

int power(int baseNumber, int powNumber) {
    int result = 1;
    for (int i=0; i < powNumber; i++) {
        result = result * baseNumber;
        // result = baseNumber
        // result = baseNumber * baseNumber, etc..
    }

    return result;
}

int main () {
    cout << power(4, 2) << endl;

    return 0;
}


