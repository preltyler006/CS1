#include <iostream>
using namespace std;

float calculate(float, float);
float calculate(float, float, float);

int main() {
    int plan;
    cout << "Please input a one if you are a member of the dental plan" << endl;
    cout << "Please input any other number if you are not" << endl;
    cin >> plan;

    if (plan == 1) {
        float service;
        float test; 
        cout << "Please input the service charge" << endl;
        cin >> service;
        cout << "Please input the test charges" << endl;
        cin >> test;
        cout << "The total bill is $" << calculate(service, test) << endl;
    } else {
        float service;
        float test;
        float medicine;
        cout << "Please input the service charge" << endl;
        cin >> service;
        cout << "Please input the test charges" << endl;
        cin >> test;
        cout << "Please input the medicine charges" << endl;
        cin >> medicine;
        cout << "The total bill is $" << calculate(service, test, medicine) << endl;

    }
    return 0;
}

float calculate(float service, float test) {
    return service + test;
}

float calculate(float service, float test, float medicine) {
    return service + test + medicine;
}