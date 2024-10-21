#include <iostream>
using namespace std;

int main() {
    int answer;
    do {
        cout << "Please input" << endl;
        cout << "1 Convert miles to kilometers" << endl;
        cout << "2 Convert kilometers to miles" << endl;
        cout << "3 Quit" << endl;
        cin >> answer;

        if (answer == 1) {
            float miles;
            cout << "Please input the miles to be converted" << endl;
            cin >> miles;
            cout << miles << " miles = " << 1.61*(miles) << " kilometers" << endl;
        } else if (answer == 2) {
            float kilometers;
            cout << "Please input the kilometers to be converted" << endl;
            cin >> kilometers;
            cout << kilometers << " kilometers = " << .621*(kilometers) << " miles" << endl;
        }

    } while (answer != 3); 

    return 0;
}