#include <iostream>
using namespace std;

int main() {

    char userString[100];
    cout << "Input your string: " << endl;
    
    cin >> userString;
    int numLower = 0;
    int i = 0;

    // for (int i = 0; i < sizeof(userString); i++) {
    while (userString[i] != '\0') {
        if (userString[i] != toupper(userString[i])) {
            numLower++;
        }
        userString[i] = toupper(userString[i]);
        i++;
    }    

    cout << userString << endl;
    cout << numLower << " characters were altered" << endl;

    return 0;
}