#include <iostream>
using namespace std;

int main() {
    int input;
    int total;
    int counter = 0;

    do {
        cout << "Please input a number to add, or -1 if you are done" << endl;
        cin >> input;
        total += input;
        counter++;
    }
    while (input != -1);

    cout << "The total is " << total << endl;
    cout << "You inputted " << (counter - 1) << " number(s)" << endl;

    return 0;
}