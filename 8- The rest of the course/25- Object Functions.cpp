#include <iostream>
using namespace std;

// creating a class
class Student {
public:
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa) {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors() {
        if (gpa >= 3.5) {
            return true;
        }
        return false;
    }
};

int main() {
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors() << endl;  // -> 0 which means false
    cout << student2.hasHonors() << endl;  // -> 1 which means true

    // this is awesome, becasue if for example, I wanted to change the honors requirment,
    // I only need to change the code in the class above instead of changing it for thousands of students.



    return 0;
}