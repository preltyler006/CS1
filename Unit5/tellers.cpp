#include <iostream>
using namespace std;

int main () {
    int numTellers; 
    int days;
    int total = 0;

    cout << "How many tellers worked at Nation's Bank during each of the last three years?" << endl;
    cin >> numTellers;

    for (int i = 1; i <= numTellers; i++) {
        for (int j = 1; j <= 3; j++){
            cout << "How many days was teller " << i << " out sick during year " << j << "?" << endl;
            cin >> days;
            total += days;
        }
    }
    cout << "The " << numTellers << " were out sick for a total of " << total << " days during the last three years." << endl;

    return 0;
}