#include <iostream>
#include <fstream>
using namespace std;

struct ASCII {
    int asciiValue;
    char asciiCharacter;
};

const string FILENAME = "./ASCIIfile.dat";
const int MAX_LENGTH = 62;


void writeToFile(fstream& ASCIIfile, ASCII listOfAscii[], int start, int end) {
    for (int i = start; i <= end; i++) {
        listOfAscii[i].asciiValue = i;
        listOfAscii[i].asciiCharacter = static_cast<char>(i);

        ASCIIfile.write(reinterpret_cast<char *>(&listOfAscii[i]), sizeof(listOfAscii[i]));
    }
}


void readFile(fstream& ASCIIfile) {
    ASCII ascii2;

    while (ASCIIfile.read((char*)&ascii2, sizeof(ascii2))) {
        cout << "     " << ascii2.asciiValue << "             " << ascii2.asciiCharacter << endl;
    }
}


int main() {

    ASCII listOfAscii[MAX_LENGTH];

    fstream ASCIIfile;

    ASCIIfile.open(FILENAME, ios::binary | ios::out);

    cout << "Character        ASCII Value" << endl << "----------------------------" << endl;

    writeToFile(ASCIIfile, listOfAscii, 48, 57);
    writeToFile(ASCIIfile, listOfAscii, 65, 90);
    writeToFile(ASCIIfile, listOfAscii, 97, 122);

    ASCIIfile.close();


    ASCIIfile.open(FILENAME, ios::binary | ios::in);
    readFile(ASCIIfile);

    ASCIIfile.close();


    return 0;
}