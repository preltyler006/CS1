#include <iostream>
using namespace std;

int main() {
    const int lengthOfArray = 7;
    int ageArray[lengthOfArray][2] = {{5, 3}, {8, 1}, {9, 1}, {10, 1}, {17, 1}, {20, 2}, {100, 1}};
    int agesToLookUp[lengthOfArray] = {};
    int currAge;
    int counter = 0;

    cout << "Please input an age from one to 100, put -99 to stop" << endl;
    cin >> currAge;

    while (currAge != -99) {
        agesToLookUp[counter] = currAge;
        counter++;
        cout << "Please input an age from one to 100, put -99 to stop" << endl;
        cin >> currAge;
    }

    for (int i = 0; i < lengthOfArray; i++) {
        cout << "The number of people " << agesToLookUp[i] << " years old is " << ageArray[i][1] << endl;
    }


    return 0;
}