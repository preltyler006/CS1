#include <iostream>
using namespace std;

int main() {
    float firstNumber; float secondNumber; float placeholder;
    // Prompt user to enter the first number.
    cout << "Enter the first number" << endl; 
    cout << "Then hit enter" << endl;
    cin >> firstNumber;
    
    // Prompt user to enter the second number.
    cout << "Enter the second number" << endl;
    cout << "Then hit enter" << endl;
    cin >> secondNumber;
    
    // Echo print the input.
    cout << endl << "You input the numbers as " << firstNumber << " and " << secondNumber << endl;
    
    // Now we will swap the values.

    placeholder = firstNumber; 
    firstNumber = secondNumber;
    secondNumber = placeholder;
    
    // Output the values.
    cout << "After swapping, the values of the two numbers are " << firstNumber << " and " << secondNumber << endl;
    return 0;
}