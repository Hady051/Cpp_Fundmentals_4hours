#include <iostream>

using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = false;

    if (isMale && isTall) {
        cout << "You are a tall male" << endl;
    }
    else if (isMale && !isTall) {
        cout << "You are male but not tall" << endl;
    }
    else if(!isMale && isTall) {
        cout << "You are a tall woman" << endl;
    }
    else {
        cout << "You are not male neither tall" << endl;
    }

    return 0;

}

// (&&): and operator
// (||): or operator
