#include <iostream>
using namespace std;

// creating a class
class Book {

public:  // making attributes for the Book class(data type)
    string title;
    string author;
    int pages;
};

int main() {
    /*
    string name = "Mike";
    double pi = 3.14;
    char favoriteLetter = 'G';
    */

    // **a class: it's the template (blueprint of a data type)
    // ""an object: is the instance of the class(blueprint), an object is an actual book

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;
    book2.title = "Hunger Games";

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << book2.pages << endl;
    cout << book2.title << endl;

    return 0;
}
