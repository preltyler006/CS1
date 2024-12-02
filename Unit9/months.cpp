#include <iostream>
using namespace std;


struct month {
    int planesLanded, planesDeparted, largestNumOfPlanes, smallestNumOfPlanes;
};

int main() {
    month months[12];

    for (int i = 0; i < 12; i++) {
        cout << "How many planes landed in month " << i + 1 << " ?" << endl;
        cin >> months[i].planesLanded;

        cout << "How many planes departed in month " << i + 1 << " ?" << endl;
        cin >> months[i].planesDeparted;

        cout << "What was the largest number of planes in a given day in month " << i + 1 << " ?" << endl;
        cin >> months[i].largestNumOfPlanes;

        cout << "What was the smallest number of planes in a given day in month " << i + 1 << " ?" << endl;
        cin >> months[i].smallestNumOfPlanes;

    }
    float avgLand, avgDepart;
    int totalLand, totalDepart;
    int leastPlanes, greatestPlanes = 0;
    int leastPlanesNum, greatestPlanesNum = 0;

    for (int i = 0; i < 12; i++) {
        avgLand = avgLand + months[i].planesLanded;
        avgDepart = avgDepart + months[i].planesDeparted;

        totalLand = totalLand + months[i].planesLanded;
        totalDepart = totalDepart + months[i].planesDeparted;

    }

    for (int i = 1; i < 12; i++) {
        if (months[i].largestNumOfPlanes > months[i - 1].largestNumOfPlanes) {
            greatestPlanes = i + 1;
            greatestPlanesNum = months[i].largestNumOfPlanes;
        }

        if (months[i].smallestNumOfPlanes < months[i - 1].smallestNumOfPlanes) {
            leastPlanes = i + 1;
            leastPlanesNum = months[i].smallestNumOfPlanes;

        }
    }

    cout << "The average number of planes that landed this year was " << (avgLand / 12) << endl;
    cout << "The average number of planes that departed this year was " << (avgDepart / 12) << endl;
    cout << "The total number of planes that landed this year was " << totalLand << endl;
    cout << "The total number of planes that departed this year was " << totalDepart << endl;
    cout << "The month with the greatest number of planes landing on a single day was month " << greatestPlanes << " with " << greatestPlanesNum << " planes";
    cout << "The month with the least number of planes landing on a single day was month " << leastPlanes << " with " << leastPlanesNum << " planes";


    return 0;
}