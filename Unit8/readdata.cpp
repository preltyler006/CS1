#include <iostream>
#include <string>
using namespace std;

const int ARRAY_LENGTH = 10;
char characterArray[ARRAY_LENGTH];

int main() {
    string lastName;
    
    cout << "Enter your last name using no more than 9 characters" << endl;
    getline(cin, lastName);
    
    if (lastName.length() < ARRAY_LENGTH) {
        for (int i = 0; i < ARRAY_LENGTH; i++) {
                characterArray[i] = lastName[i];
        }
    }
    

    cout << characterArray;
    return 0;
}