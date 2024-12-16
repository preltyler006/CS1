#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
    int studentID;
    string name;
    float gpa;
};

int main() {

    Student listOfStudents[3];

    for (int i = 0; i < 3; i++) {
        cout << "Input the ID for student " << i + 1 << endl;
        cin >> listOfStudents[i].studentID;

        cout << "Input the name for student " << i + 1 << endl;
        cin >> listOfStudents[i].name;

        cout << "Input the GPA for student " << i + 1 << endl;
        cin >> listOfStudents[i].gpa;
    }

    for (int i = 0; i < 3; i++) {
        cout << "ID: " << listOfStudents[i].studentID << setw(10) 
        << "NAME: " << listOfStudents[i].name << setw(10) 
        << "GPA: " << listOfStudents[i].gpa << endl;
    }

    return 0;
}