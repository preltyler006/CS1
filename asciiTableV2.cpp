#include <iostream>
using namespace std;

void printAsciiCharacters(int, int);

int main() {
    cout << endl << "Character     ASCII Value" << endl;
    cout << "-------------------------" << endl;

    printAsciiCharacters(48, 57);
    printAsciiCharacters(65, 90);
    printAsciiCharacters(97, 122);  

    return 0;

}

void printAsciiCharacters(int start, int end) {
    int counter = start;
    while (counter <= end) {
        cout << static_cast<char>(counter) << "    " << counter << endl;
        counter++;
    }
}