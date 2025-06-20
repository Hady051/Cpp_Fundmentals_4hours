#include <iostream>
using namespace std;

class Movie {
    private:  // only code inside the class Movie block is able to access what's here
    // so if for example I put the rating here, the main function can't access it.
    string rating;

    public:
        string title;
        string director;
        //string rating;
        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            //rating = aRating;
            setRating(aRating);
        }

        void setRating(string aRating) {
            //rating = aRating;
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
                // || -> 'or'
                rating = aRating;
            }
            else {
                rating = "NR";  // Not Rated
            }
        }

        string getRating() {
            return rating;
        }
};

int main() {
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    // to change the rating to whatever I want (works if rating is in private)
    //avengers.setRating("woo wii waa");  // invalid rating

    // so I basically controlled the rating to be only among the given ones I declared.

    //cout << avengers.rating << endl;
    cout << avengers.getRating() << endl;

    return 0;
}