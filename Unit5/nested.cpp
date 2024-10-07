#include <iostream> 
using namespace std;
int main() {
    int numStudents;
    float numHours, total, average, bio, prgrm;
    int student, day, n = 0; // these are the counters for the loops
    cout << "This program will find the average number of hours a day" << " that a student spent programming over a long weekend\n\n";
    cout << "How many students are there ?" << endl << endl;
    cin >> numStudents;
    cout << "How many days?" << endl;
    cin >> n;
    
    for(student = 1; student <= n; student++) {
        total = 0;
        bio = 0;
        prgrm = 0;
        
        for(day = 1; day <= n; day++) {
            cout << "Please enter the number of hours worked by student " << student <<" on day " << day << " for biology" << endl;
            cin >> numHours;
            bio += numHours; 
        }

        numHours = 0;
        day = 0;

        for(day = 1; day <= n; day++) {
            cout << "Please enter the number of hours worked by student " << student <<" on day " << day << " for programming" << endl;
            cin >> numHours;
            prgrm += numHours; 
        }
        
        bio /= n;
        cout << endl;

        prgrm /= n;
        cout << endl;
        cout << endl;

        if (bio > prgrm) {
            cout << "The average number of hours per day spent biology by " << "student " << student << " is " << bio << endl << endl << endl;
        } else {
            cout << "The average number of hours per day spent programming by " << "student " << student << " is " << average << endl << endl << endl;
        }
    } 
    return 0;
}