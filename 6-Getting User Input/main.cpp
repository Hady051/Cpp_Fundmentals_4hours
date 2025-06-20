#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "You are " << age << " years old" << endl;

    string name;

    cout << "Enter your name: " << endl;
    //getline(cin, name);
    // this allows you to instead of getting one number or character, you can get the entire line the user types
    cin >> name;
    // I tried to type Hady Fayez and it only showed Hady
    cout << "Hello " << name << endl;



    return 0;
}
