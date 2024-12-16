#include <iostream>
using namespace std;

int main() {
    int length, width;
    cout << "What is the length of your rectangle? " << endl;
    cin >> length;
    while (length < 0) {
        cout << "Invalid input: Please input a positive number" << endl;
        cin >> length;
    }

    cout << "What is the width of your rectangle? " << endl;
    cin >> width;

    while (width < 0) {
        cout << "Invalid input: Please input a positive number" << endl;
        cin >> width;
    }

    cout << (width * length) << " is the area." << endl;

    return 0;
}