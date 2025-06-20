#include <iostream>

using namespace std;
/*
void sayHi(string user, int age){
    cout << "Hello " << user << ", you are " << age << " years old" << endl;
}
*/

// declarartion:
void sayHi(string user, int age);

int main()
{

    sayHi("Ahmed", 19);
    sayHi("Tom", 45);
    sayHi("Steve", 48);

    return 0;
}


// You can also call it and write it below instead of above

// definition:
void sayHi(string user, int age) {
    cout << "Hello " << user << ", you are " << age << " years old" << endl;
}
