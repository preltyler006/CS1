#include <iostream>
using namespace std;

int main() {
    cout << endl << "Character     ASCII Value" << endl;
    cout << "-------------------------" << endl;

    // FOR LOOP METHOD

    for (int i = 48; i <= 57; i++) { // Printing number values
        cout << "    " << (unsigned char)i << "             " << i << endl;
    }

    for (int i = 65; i <= 90; i++) { // Printing capital letters
        cout << "    " << (unsigned char)i << "             " << i << endl;
    }

    for (int i = 97; i <= 122; i++) { // Printing lowercase letters
        cout << "    " << (unsigned char)i << "             " << i << endl;
    }
    

    cout << endl << endl << endl << endl;




    // 3 Different loop types


    cout << endl << "Character     ASCII Value" << endl;
    cout << "-------------------------" << endl;


    int i = 48;
    while (i <= 57) { // Normal While Loop
        cout << "    " << (unsigned char)i << "             " << i << endl;
        i++;
    }

    i = 65;
    do { // Do-while loop
        cout << "    " << (unsigned char)i << "             " << i << endl;
        i++;
    }
    while (i <= 90);

    for (int i = 97; i <= 122; i++) { // Printing lowercase letters
        cout << "    " << (unsigned char)i << "             " << i << endl;
    }

    return 0;
}