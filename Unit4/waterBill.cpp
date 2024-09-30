#include <iostream> 
using namespace std;

int main() {

    float q1, q2, q3, q4;
    float avg;

    cout << "Please input your water bill for quarter 1:" << endl;
    cin >> q1;
    cout << endl;

    cout << "Please input your water bill for quarter 2:" << endl;
    cin >> q2;
    cout << endl;

    cout << "Please input your water bill for quarter 3:" << endl;
    cin >> q3;
    cout << endl;

    cout << "Please input your water bill for quarter 4:" << endl;
    cin >> q4;
    cout << endl;

    avg = (q1 + q2 + q3 + q4)/12;

    cout << "Your average monthly bill is $" << avg << ". ";

    if (avg > 75) {
        cout << "You are using excessive amounts of water" << endl;
    } else if (avg > 25) {
        cout << "You are using an average amount of water" << endl;
    } else {
        cout << "Great job conserving water!" << endl;
    }

    return 0;
}