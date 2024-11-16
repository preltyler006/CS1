#include <iostream>
#include <string>
using namespace std;


int consonantCounter(char[]);

const int MAX_LENGTH = 50;

int main() {

    int numOfConsonants = 0;
    char userString[MAX_LENGTH];

    cout << "Enter your string of max 50 characters: " << endl;
    cin >> userString;

    numOfConsonants = consonantCounter(userString);

    cout << "There are " << numOfConsonants << " consonants in your string." << endl;

    return 0;
}

int consonantCounter(char userString[]) {
    int numOfConsonants = 0;
    bool vowelPresent = false;
    char listOfVowels[5] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < MAX_LENGTH; i++) { // for every letter in user string
        int j = 0;
        while ((vowelPresent == false) && (j < 4)) { // for every vowel in listOfVowels
            if (userString[i] == listOfVowels[j]) {
                vowelPresent = true;
            }
            j++;
        }
        if (vowelPresent == false) {
            numOfConsonants++;
        }
    }
    return numOfConsonants;

}