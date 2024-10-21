#include <iostream>
using namespace std;



void funcSwap(float& first, float& second) {
    float spacer;
    spacer = first;
    first = second;
    second = spacer;
}

int main() {
    float first;
    float second;

    cout << "Enter the first number" << endl << "Then hit enter" << endl;
    cin >> first;
    cout << "Enter the second number" << endl << "Then hit enter" << endl;
    cin >> second;

    cout << "You input the numbers as " << first << " and " << second << endl;
    funcSwap(first, second);
 
    cout << "After swapping, the first number has the value of " << first << " which was the value of the second number" << endl;
    cout << "The second number has the value of " << second << " which was the value of the first number" << endl;

    return 0;
}

