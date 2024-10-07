#include <iostream>
using namespace std;

int main() {
    int seconds;
    int height;
    double gravity = 9.8;
    double distance;

    cout << "What is the height of the bridge?" << endl;
    cin >> height;
    cout << "How many seconds did it fall?" << endl;
    cin >> seconds;

    cout << "Time Falling (seconds) Distance Fallen (meters)" << endl;
    cout << "***********************************************" << endl;
    for (int s = 0; s <= seconds; s++) {
        distance = 0.5 * gravity * (s*s);
        cout << s << "               " << distance << endl;
    }
    return 0;
}