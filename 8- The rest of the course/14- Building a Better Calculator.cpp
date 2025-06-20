#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char math_op;

    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the math operator: " << endl;
    cin >> math_op;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    int result;
    if(math_op == '+') {
        result = num1 + num2;
        cout << "The result of the calculator: " << result << endl;
    }
    else if(math_op == '-') {
        result = num1 - num2;
        cout << "The result of the calculator: " << result << endl;
    }
    else if(math_op == '*') {
        result = num1 * num2;
        cout << "The result of the calculator: " << result << endl;
    }
    else if(math_op == '/') {
        result = num1 / num2;
        cout << "The result of the calculator: " << result << endl;
    }
    else {
        cout << "You entered an invalid value." << endl;
    }

    return 0;
}