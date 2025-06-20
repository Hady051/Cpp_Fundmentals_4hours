#include <iostream>
using namespace std;

// pointers are memory addressors
// ram is the storage youre using to run your code

int main() {
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";   // all of these variables get stored inside the memory of the computer.
    // so basically you can think of 19 is stored inside a container called "age" inside the memory

    // printing the memory address of each variable
    //cout << &age << endl;  // -> 0xa774bffd48  (hexadecimal number of the memory address)

    /*  printing the pointers(memory addresses)
    cout << "Age: " << &age << endl;
    cout << "Name: " << &name << endl;
    cout << "GPA: " << &gpa << endl;
    */

    // we can declare a pointer variable to store memory addresses inside it.
    // **same type of the variable
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    cout << "age pointer: " << pAge << endl;
    cout << "name pointer: " << pName << endl;
    cout << "gpa pointer: " << pGpa << endl;

    cout << "Value inside the gpa pointer = " << *pGpa << endl;  // don't forget the astericks

    // you can get the m.address by adding & again.
    cout << "the gpa pointer: " << &*pGpa << endl;
    // Same goes for m.address value by adding
    cout << "Value inside the gpa pointer = " << *&*pGpa << endl;

    return 0;
}
