#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "What is your score? " << endl;
    cin >> score;

    while (!(score <= 100 && score >= 0)) {
        cout << "Invalid input, please try again" << endl;
        cin >> score;
    }

    if (score >= 90) {
        cout << "A" << endl;
    } else if (score >= 80) {
        cout << "B" << endl;
    } else if (score >= 70) {
        cout << "C" << endl; 
    } else if (score >= 60) {
        cout << "D" << endl;
    } else {
        cout << "F" << endl;
    }

    return 0;
}