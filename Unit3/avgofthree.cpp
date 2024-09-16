#include <iostream> 
#include <iomanip>
using namespace std;

float grade1;
float grade2;
float grade3;
float avg;

int main() {
    cout << "Please input the first grade: ";
    cin >> grade1;
    cout << endl;

    cout << "Please input the second grade: ";
    cin >> grade2;
    cout << endl;

    cout << "Please input the third grade: ";
    cin >> grade3;
    cout << endl;

    avg = (grade1 + grade2 + grade3)/3;

    cout << "The average of the three grades is: " << setprecision(4) << avg;
}