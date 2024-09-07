#include <iostream> 
#include <string> 
using namespace std;
// Definition of constants

const string FAVORITESODA = "Dr. Dolittle";
const char BESTRATING = 'A';

int main() {
    char rating; // 2nd highest product rating 
    string favoriteSnack; //mostpreferredsnack
    int numberOfPeople; // the number of people in the survey
    int topChoiceTotal; // the number of people who prefer the top choice
    
    // Fill in the code to do the following:
    // Assign the value of "crackers" to favoriteSnack
    // Assign a grade of 'B' to rating
    // Assign the number 250 to the numberOfPeople
    // Assign the number 148 to the topChoiceTotal
    // Fill in the blanks of the following:
    favoriteSnack = "crackers";
    rating = 'B';
    numberOfPeople = 250;
    topChoiceTotal = 148;


    cout << "The preferred soda is " << FAVORITESODA << endl;
    cout << "The preferred snack is " << favoriteSnack << endl;
    cout << "Out of " << numberOfPeople << " people " << topChoiceTotal << " chose these items!" << endl;
    cout << "Each of these products were given a rating of " << BESTRATING;
    cout << " from our expert tasters" << endl;
    cout << "The other producs were rated no higher than a " << rating << endl;
    
    return 0;
}