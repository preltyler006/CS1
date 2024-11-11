#include <iostream>
#include <iomanip>
using namespace std;

typedef int* temperatures;

float average(temperatures temps, int numOfTemps) {
    float total = 0;

    for (int i = 0; i < numOfTemps; i++) {
        total += temps[i];
    }

    return total/numOfTemps;
}

int highest(temperatures temps, int numOfTemps) {
    int high = temps[0];

    for (int i = 1; i < numOfTemps; i++) {
        if (temps[i] > high) {
            high = temps[i];
        }
    }
    return high;
}

int lowest(temperatures temps, int numOfTemps) {
    int low = temps[0];

    for (int i = 1; i < numOfTemps; i++) {
        if (temps[i] < low) {
            low = temps[i];
        }
    }
    return low;
}



int main() {
    int numOfTemps;
    
    cout << "Please input the number of temperatures to be read" << endl;
    cin >> numOfTemps;

    temperatures temps = new int[numOfTemps];

    for (int i = 0; i < numOfTemps; i++) {
        cout << "Input temperature " << i + 1 << endl;
        cin >> temps[i];

    }

    float avg = average(temps, numOfTemps);
    cout << "The average temperature is " << fixed << setprecision(2) << avg << endl;

    int high = highest(temps, numOfTemps);
    cout << "The highest temperature is " << fixed << setprecision(2) << high << endl;

    int low = lowest(temps, numOfTemps);
    cout << "The lowest temperature is " << fixed << setprecision(2) << low << endl;

    return 0;
}