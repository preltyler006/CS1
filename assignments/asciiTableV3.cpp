#include <iostream>
using namespace std;


const int MAX_LENGTH = 62;

typedef char characterArray[MAX_LENGTH];
typedef int asciiValueArray[MAX_LENGTH]; 

int assignAsciiValues(characterArray, asciiValueArray, int, int, int);
void printValues(characterArray, asciiValueArray);

int main() {
    characterArray characters;
    asciiValueArray asciiValues;
    int nextAvailable = 0;


    cout << endl << "Character     ASCII Value" << endl;
    cout << "-------------------------" << endl;

    nextAvailable = assignAsciiValues(characters, asciiValues, 48, 57, nextAvailable);
    nextAvailable = assignAsciiValues(characters, asciiValues, 65, 90, nextAvailable);
    nextAvailable = assignAsciiValues(characters, asciiValues, 97, 122, nextAvailable);

    printValues(characters, asciiValues);

    return 0;

}

int assignAsciiValues(characterArray characters, asciiValueArray asciiValues, int start, int end, int startingPoint) {
    int counter = startingPoint;
    for (int i = start; i <= end; i++) {
        characters[counter] = static_cast<char>(i);
        asciiValues[counter] = i;
        counter++;
    }
    return counter;
}

void printValues(characterArray characters, asciiValueArray asciiValues) {
    for (int i = 0; i < MAX_LENGTH; i++) {
        cout << characters[i] << "     " << asciiValues[i];
        cout << endl;
    }
}