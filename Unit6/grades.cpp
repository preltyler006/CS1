#include <iostream>
using namespace std;

void calcAverage(float& totalGrades, int numGrades) {
    totalGrades /= numGrades;
}

int main() {
    float totalGrades;
    int numGrades;

    cout << "Enter the number of grades" << endl;
    cin >> numGrades;

    for (int i = 0; i < numGrades; i++){
        int holder;
        cout << "Enter a numeric grade between 0-100" << endl;
        cin >> holder;
        totalGrades += holder;
    }

    calcAverage(totalGrades, numGrades);

    cout << "The grade is ";

    if (totalGrades >= 90) {
        cout << "A";
    } else if (totalGrades >= 80) {
        cout << "B";
    } else if (totalGrades >= 70) {
        cout << "C";
    } else if (totalGrades >= 60) {
        cout << "D";
    } else {
        cout << "F";
    }

    return 0;
}