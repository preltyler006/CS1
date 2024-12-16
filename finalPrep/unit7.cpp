#include <iostream>
using namespace std;

const int MAX_LENGTH = 5;

int main() {

    int scores[MAX_LENGTH];
    int currScore = 0;
    float avg = 0;

    for (int i = 0; i < MAX_LENGTH; i++) {
        cout << "Please input your score for number " << i << endl;
        cin >> currScore;

        while (currScore < 0 || currScore > 100) {
            cout << "Invalid input please try again " << endl;
            cin >> currScore;
        }

        scores[i] = currScore;
    }

    for (int i = 0; i < MAX_LENGTH; i++) {
        avg += scores[i];
    }

    cout << "The average of your scores is " << (avg/5) << endl;

    return 0;
}