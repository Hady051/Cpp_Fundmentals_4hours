#include <iostream>
using namespace std;

class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken." << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad." << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

// Inheritance of Chef class functions to another class
class ItalianChef : public Chef {
public:
    void makePasta() {
        cout << "The chef makes pasta." << endl;
    }
    void makePizza() {
        cout << "The chef makes pizza." << endl;
    }
    // you can override functions as well
    void makeSpecialDish() {
        cout << "The chef makes pizza rolls with a dish of spagetti." << endl;
    }
};

int main() {
    Chef chef1;

    chef1.makeChicken();
    chef1.makeSpecialDish();

    ItalianChef spagooty;

    spagooty.makeChicken(); // even though this class is empty,
    // you can still use that function inherited from Chef class
    spagooty.makeSpecialDish();


    // note, we would call the "Chef" class "superclass"
    // and the "Italian Class" "sub class" since it's the one inheriting.

    return 0;
}
