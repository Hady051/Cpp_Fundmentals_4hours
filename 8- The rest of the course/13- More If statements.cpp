#include <iostream>
using namespace std;

int getMax(int num1, int num2);
int getMax3(int num1, int num2, int num3);

int main()
{
    int answer;
    int answer3numbers;

    answer = getMax(5, 10);
    cout << "The bigger of the two numbers is: " << answer << endl;

    answer3numbers = getMax3(31, 21, 31);
    cout << "The bigger integer out of the 3 is: " << answer3numbers << endl;

    return 0;

}


int getMax(int num1, int num2) {
    int result;

    if (num1 >= num2) {
        result = num1;
    }
    else {
        result = num2;
    }

    return result;
}

int getMax3(int num1, int num2, int num3) {
    int result;

    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    }
    else if(num3 >= num1 && num3 >= num2) {
        result = num3;
    }

    return result;
}
