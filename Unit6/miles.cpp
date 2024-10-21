#include <iostream>
using namespace std;

void milesConversion(float miles, float hours, float& milesPerHour) {
    milesPerHour = miles / hours;
}

int main() {
    float milesPerHour = 0;
    int miles;
    int hours;

    cout << "Please input the miles traveled" << endl;
    cin >> miles;
    cout << "Please input the hours traveled" << endl;
    cin >> hours;
    milesConversion(miles, hours, milesPerHour);

    cout << "Your speed is " << milesPerHour << " miles per hour" << endl;

    return 0;
}

