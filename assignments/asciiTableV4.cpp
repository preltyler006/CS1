#include <iostream>
using namespace std;

struct ASCII {
    int asciiValue;
    char asciiCharacter;
};

const int MAX_LENGTH = 62;


int addAsciiChar(ASCII listOfAscii[], int, int, int);


int main() {
    ASCII listOfAscii[MAX_LENGTH];
    int nextAvailable = 0;
    
    cout << endl << "Character       ASCII Value" << endl;
    cout << "---------------------------" << endl;

    listOfAscii[1].asciiValue = 1;

    nextAvailable = addAsciiChar(listOfAscii, 48, 57, nextAvailable);
    nextAvailable = addAsciiChar(listOfAscii, 65, 90, nextAvailable);
    nextAvailable = addAsciiChar(listOfAscii, 97, 122, nextAvailable);

    return 0;
}

int addAsciiChar(ASCII listOfAscii[], int start, int end, int startingPoint) {
    for (int counter = start; counter <= end; counter++) {
        listOfAscii[startingPoint].asciiValue = counter;
        listOfAscii[startingPoint].asciiCharacter = static_cast<char>(counter);

        cout << "   " << listOfAscii[startingPoint].asciiValue << "              ";
        cout << listOfAscii[startingPoint].asciiCharacter << endl;

        startingPoint++;
    }

    return startingPoint;
}