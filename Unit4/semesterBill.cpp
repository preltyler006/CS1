#include <iostream>
using namespace std;

int main() {

    char state;
    char board;

    cout << "Please input 'I' if you are in-state or 'O' if you are out-of-state:" << endl;
    cin >> state;
    cout << "Please input 'Y' if you require room and board and 'N' if you do not:" << endl;
    cin >> board;

    if (state == 'I' && board == 'Y') {
        cout << "Your total bill for this semester is $5500";
    } else if (state == 'I' && board == 'N'){
        cout << "Your total bill for this semester is $3000";
    } else if (state == 'O' && board == 'Y') {
        cout << "Your total bill for this semester is $8000";
    } else if (state == 'O' && board == 'N') {
        cout << "Your total bill for this semester is $4500";
    }

    return 0;
}