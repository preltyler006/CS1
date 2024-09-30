#include <iostream> 
using namespace std;
int main() {
    float average; // holds the grade average
    cout << "Input your average:" << endl; 
    cin >> average;
    if (average > 100 || average < 0)
        cout << "Invalid data, please try again" << endl;
    else if (average >= 90)
        cout << "A" << endl;
    else if (average >= 80)
        cout << "B" << endl;
    else if (average >= 60)
        cout << "You Pass" << endl;
    else if (average >= 0)
        cout << "You Fail" << endl;
    return 0; 
    }