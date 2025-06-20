#include <iostream>
using namespace std;

int main() {
    // for a 2D array initialization, you need 2 square brackets. Unlike a normal array -> 1 sq bracket
    // each element here is an array.
    // specify the rows and cols, to declare the bounds of it, no zero
    int numberGrid[3][2] = {
        {1, 2},  // 1st element
        {3, 4},  // 2nd
        {5, 6}   // 3rd
    };

    // to get an index of an element inside it's like a Matrix,
    // specify the rows and cols, starting from 0
    cout << numberGrid[0][1] << endl;  // -> 2
    cout << numberGrid[1][1] << endl;  // -> 4

    // a row in a 2D array is also known as an element, since it's an array inside the other array.

    // Nested loop is used to iterate through the array.
    cout << "Nested loop: " << endl;
    for (int i = 0; i < 3; i++) {            //rows, iterate through each element
        for (int j = 0; j < 2; j++) {        //cols, iterate through each element inside the elements(arrays)
            cout << numberGrid[i][j];
        }
        cout << endl;  // to make a new line after each row(element)
    }

    return 0;
}