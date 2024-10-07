#include <iostream> 
using namespace std;

int main() {
    int valueM; // value is some positive number n
    int valueN;
    int total = 0; // total holds the sum of the first n positive numbers
    int number; // the amount of numbers
    float mean; // the average of the first n positive numbers
    
    cout << "Please enter a positive starting integer" << endl;
    cin >> valueN;
    cout << "Please enter a positive ending integer" << endl;
    cin >> valueM;

    if (valueM > 0) {
        for (number = valueN; number <= valueM; number++) {
        total = total + number;
    } // curly braces are optional since there is only one statement
    mean = static_cast<float>(total) / (valueM - valueN + 1); // note the use of the typecast operator here
    cout << "The mean average of the numbers starting at " << valueN << " all the way to " << valueM << " is " << mean << endl;
    } 
    else
        cout << "Invalid input - integer must be positive" << endl; 
    return 0;
}