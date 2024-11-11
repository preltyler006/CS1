#include <iostream>
using namespace std;


int main() {

    const int numRows = 5;
    int grades[5] = {0,0,0,0,0};
    int numOfGrades;

    
    cout << "Please input the number of grades to be read in. (1-50)" << endl;
    cin >> numOfGrades;
    

    for (int i = 0; i < numOfGrades; i++) {
        char val;
        cout << "Input a grade" << endl;
        cin >> val;

        if (val == 'A') {
            grades[0] += 1;
        } else if (val == 'B') {
            grades[1] += 1;
        } else if (val == 'C') {
            grades[2] += 1;
        } else if (val == 'D') {
            grades[3] += 1;
        } else if (val == 'F') {
            grades[4] += 1;
        }
    }

    cout << "Number of A=" << grades[0] << endl;
    cout << "Number of B=" << grades[1] << endl;
    cout << "Number of C=" << grades[2] << endl;
    cout << "Number of D=" << grades[3] << endl;
    cout << "Number of F=" << grades[4] << endl;

    return 0;
}