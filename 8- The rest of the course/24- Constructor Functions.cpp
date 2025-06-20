#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        // creating a constructor
        /*
        Book() { // we can add an argument for the class to use
            cout << "Creating Object " << endl;
            // for example, here we made 2 objects of the class Book
            // so this constructor prints that line 2 times.
            // the times we create an object of the class, the times the constructors operate

            // we can use Constructors in order to initialize our objects with informations
        }
        */

        Book(string aTitle, string aAuthor, int apages) { // a:argument (not syntax, just my code)
            title = aTitle;
            author = aAuthor;
            pages = apages;
        }

        Book() { // ** gives the option of initializing an object (book3) without arguments
            // so it's like initial information without passing anything.
            title = "No title";
            author = "no author";
            pages = 0;
        }

};

int main() {
    Book book1("Harry Potter", "JK Rowling", 500);

    Book book2("Lord of the Rings", "Tolkein",  700);

    // you can still edit them
    book1.pages = 400;

    Book book3;

    cout << book3.title << endl;

/*
    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << book2.pages << endl;
    cout << book2.title << endl;
*/

    return 0;
}