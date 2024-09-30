#include <iostream>
using namespace std;

int main() {
    int shirts;
    float total;

    cout << "How many shirts are required?" << endl;
    cin >> shirts;

    if (shirts < 0) {
        cout << "Not a valid input. Please try again. " << endl;
        cin >> shirts;
    }

    total = shirts * 12;

    if (shirts >= 31) {
        total *= .75;
    } else if (shirts >= 21) {
        total *= .80;
    } else if (shirts >= 11) {
        total *= .85;
    } else if (shirts >= 5) {
        total *= .90;
    }

    cout << "The cost per shirt is $12 and the total cost is $" << total;

    return 0;
}