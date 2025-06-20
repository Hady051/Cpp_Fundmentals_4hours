#include <iostream>

using namespace std;

int main ()
{
    int secretNumber = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    /*
    while (guess != secretNumber) {
        cout << "Guess the secret number: " << endl;
        cin >> guess;
        if (guess != secretNumber) {
            cout << "You guessed wrong, try again." << endl;
        }
    }
    to_string(guess);  // to convert int to string

    cout << "your guess: " << guess << " is right." << " Good job!" << endl;
    */

    while (guess != secretNumber && !outOfGuesses) {
        if (guessCount < guessLimit) {
            cout << "Guess the secret number: " << endl;
            cin >> guess;
            guessCount++;
            if (guess != secretNumber) {
                if (guessLimit - guessCount > 1) {
                    cout << "You guessed wrong, you have " << guessLimit - guessCount
                         << " tries left." << endl;
                }
                else if (guessLimit - guessCount == 1) {
                    cout << "You guessed wrong, you have " << guessLimit - guessCount
                         << " try left." << endl;
                }
            }
            else {
                to_string(guess);  // to convert int to string
                cout << "your guess: " << guess << " is right." << " Good job!" << endl;
            }
        }
        else {
            cout << "You didn't guess right in 3 tries, you lost hahahahha." << endl;
            outOfGuesses = true;
        }
    }

    return 0;

}