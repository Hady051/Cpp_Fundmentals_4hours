#include <iostream>

using namespace std;

string getDayOfWeek();


int main()
{

    //string day;

    //day = getDayOfWeek();

    getDayOfWeek();


    return 0;

}


// function to convert numbers to days of the week
string getDayOfWeek() {
    int dayNum;
    string dayName;

    cout << "Enter an integer between '0' and '6': " << endl;
    cin >> dayNum;

    // I can use if here as well. But I would have to create 7/8 lines of it.
    /*
    if(dayNum == 0) {
        dayName = "Saturday"
    }
    else if(dayNum == 1) {
        dayName = "Sunday"
    }
    */

    // using switch here is way better. If you don't use break,
    // it will keep looking through the (switch) cases till it finds (break).
    // (default) is used in the end if all the cases weren't true, like (else).
    switch (dayNum) {
        case 0:
            dayName = "Saturday";
            break;
        case 1:
            dayName = "Sunday";
            break;
        case 2:
            dayName = "Monday";
            break;
        case 3:
            dayName = "Tuesday";
            break;
        case 4:
            dayName = "Wedneday";
            break;
        case 5:
            dayName = "Thursday";
            break;
        case 6:
            dayName = "Friday";
            break;
        default:
            dayName = "You entered an Invalid value.";
    }

    // useful in general when the user doesn't enter the value you want using (switch)
    switch (dayNum) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            cout << "You entered int: " << dayNum << " and the day is: " << dayName << endl;
            break;
        default:
            cout << "You entered an invalid value." << endl;
    }
    return dayName;

}