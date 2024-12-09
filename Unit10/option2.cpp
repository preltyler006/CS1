#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath> // For mathematical operations
using namespace std;

const int MAX_RECORDS = 20;
const double PI = 3.14159;

struct Circle {
    float radius;    // Radius of the circle
    float diameter;  // Diameter of the circle
    float area;      // Area of the circle
};

void readCircles(Circle circles[], int& count);
void writeBinaryFile(const char* fileName, Circle circles[], int count);
void readBinaryFile(const char* fileName, Circle circles[], int& count);
void writeTextFile(const char* fileName, Circle circles[], int count);

int main() {
    Circle circles[MAX_RECORDS];
    int count = 0;

    readCircles(circles, count);

    writeBinaryFile("./circles.dat", circles, count);

    readBinaryFile("./circles.dat", circles, count);

    writeTextFile("./circles.txt", circles, count);

    cout << "All operations completed. Check './circles.txt' for output." << endl;
    return 0;
}

void readCircles(Circle circles[], int& count) {
    char more;
    count = 0;

    do {
        if (count >= MAX_RECORDS) {
            cout << "Maximum number of records reached!" << endl;
            break;
        }

        cout << "Enter the following information:" << endl;
        cout << "Radius of circle: ";
        cin >> circles[count].radius;

        // Calculate the diameter and area
        circles[count].diameter = 2 * circles[count].radius;
        circles[count].area = PI * pow(circles[count].radius, 2);

        count++;

        cout << "Enter a Y if you would like to input more data: ";
        cin >> more;

    } while (toupper(more) == 'Y');
}

void writeBinaryFile(const char* fileName, Circle circles[], int count) {
    ofstream outFile(fileName, ios::binary);
    if (!outFile) {
        cerr << "Error: Could not open file for writing." << endl;
        return;
    }
    outFile.write(reinterpret_cast<char*>(circles), sizeof(Circle) * count);
    outFile.close();
}

void readBinaryFile(const char* fileName, Circle circles[], int& count) {
    ifstream inFile(fileName, ios::binary);
    if (!inFile) {
        cerr << "Error: Could not open file for reading." << endl;
        return;
    }
    inFile.seekg(0, ios::end);
    count = inFile.tellg() / sizeof(Circle);
    inFile.seekg(0, ios::beg);
    inFile.read(reinterpret_cast<char*>(circles), sizeof(Circle) * count);
    inFile.close();
}

void writeTextFile(const char* fileName, Circle circles[], int count) {
    ofstream outFile(fileName);
    if (!outFile) {
        cerr << "Error: Could not open file for writing." << endl;
        return;
    }

    outFile << left << setw(10) << "Radius" 
            << setw(15) << "Area" 
            << setw(15) << "Circumference" << endl;

    for (int i = 0; i < count; i++) {
        outFile << left << setw(10) << fixed << setprecision(2) << circles[i].radius
                << setw(15) << fixed << setprecision(2) << circles[i].area
                << setw(15) << fixed << setprecision(2) << circles[i].diameter * PI
                << endl;
    }

    outFile.close();
}
