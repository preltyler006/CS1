#include <iostream>
using namespace std;

int main() {
    float kilometers; float miles;

    cout << "Enter the amount of kilometers you want: " << endl;
    cin >> kilometers;

    miles = kilometers * .621;

    cout << kilometers << " kilometers is the same as " << miles << " miles";

    return 0;
}