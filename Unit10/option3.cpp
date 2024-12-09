#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_EMPLOYEES = 100;

struct Employee {
    string name;
    long socialSecurity;
    int departmentID;
    int yearsEmployed;
    float salary;
};

void readEmployees(const char* inputFileName, Employee employees[], int& count);
void writeBinaryFile(const char* binaryFileName, Employee employees[], int count);
void readBinaryFile(const char* binaryFileName, Employee employees[], int& count);
void writeTextFile(const char* textFileName, Employee employees[], int count);

int main() {
    Employee employees[MAX_EMPLOYEES];
    int count = 0;

    readEmployees("./employee.in", employees, count);

    writeBinaryFile("./employees.dat", employees, count);

    readBinaryFile("./employees.dat", employees, count);

    writeTextFile("./employees.txt", employees, count);

    cout << "All operations completed. Check './employees.txt' for output." << endl;
    return 0;
}

void readEmployees(const char* inputFileName, Employee employees[], int& count) {
    ifstream inFile(inputFileName);
    if (!inFile) {
        cerr << "Error: Could not open input file." << endl;
        exit(1);
    }

    count = 0;
    while (inFile >> ws && count < MAX_EMPLOYEES) {
        getline(inFile, employees[count].name);
        inFile >> employees[count].socialSecurity
               >> employees[count].departmentID
               >> employees[count].yearsEmployed
               >> employees[count].salary;
        count++;
    }

    inFile.close();
}

void writeBinaryFile(const char* binaryFileName, Employee employees[], int count) {
    ofstream outFile(binaryFileName, ios::binary);
    if (!outFile) {
        cerr << "Error: Could not open binary file for writing." << endl;
        exit(1);
    }

    for (int i = 0; i < count; i++) {
        size_t nameLength = employees[i].name.size();
        outFile.write(reinterpret_cast<char*>(&nameLength), sizeof(nameLength));
        outFile.write(employees[i].name.c_str(), nameLength);
        outFile.write(reinterpret_cast<char*>(&employees[i].socialSecurity), sizeof(employees[i].socialSecurity));
        outFile.write(reinterpret_cast<char*>(&employees[i].departmentID), sizeof(employees[i].departmentID));
        outFile.write(reinterpret_cast<char*>(&employees[i].yearsEmployed), sizeof(employees[i].yearsEmployed));
        outFile.write(reinterpret_cast<char*>(&employees[i].salary), sizeof(employees[i].salary));
    }

    outFile.close();
}

void readBinaryFile(const char* binaryFileName, Employee employees[], int& count) {
    ifstream inFile(binaryFileName, ios::binary);
    if (!inFile) {
        cerr << "Error: Could not open binary file for reading." << endl;
        exit(1);
    }

    count = 0;
    while (inFile && count < MAX_EMPLOYEES) {
        size_t nameLength;
        inFile.read(reinterpret_cast<char*>(&nameLength), sizeof(nameLength));
        employees[count].name.resize(nameLength);
        inFile.read(&employees[count].name[0], nameLength);
        inFile.read(reinterpret_cast<char*>(&employees[count].socialSecurity), sizeof(employees[count].socialSecurity));
        inFile.read(reinterpret_cast<char*>(&employees[count].departmentID), sizeof(employees[count].departmentID));
        inFile.read(reinterpret_cast<char*>(&employees[count].yearsEmployed), sizeof(employees[count].yearsEmployed));
        inFile.read(reinterpret_cast<char*>(&employees[count].salary), sizeof(employees[count].salary));
        if (inFile) count++;
    }

    inFile.close();
}

void writeTextFile(const char* textFileName, Employee employees[], int count) {
    ofstream outFile(textFileName);
    if (!outFile) {
        cerr << "Error: Could not open text file for writing." << endl;
        exit(1);
    }

    float totalSalary = 0;
    int totalYearsEmployed = 0;

    outFile << left << setw(20) << "Name"
            << setw(15) << "Social Security"
            << setw(10) << "Dept ID"
            << setw(15) << "Years Employed"
            << setw(10) << "Salary" << endl;

    for (int i = 0; i < count; i++) {
        outFile << left << setw(20) << employees[i].name
                << setw(15) << employees[i].socialSecurity
                << setw(10) << employees[i].departmentID
                << setw(15) << employees[i].yearsEmployed
                << setw(10) << fixed << setprecision(2) << employees[i].salary << endl;

        totalSalary += employees[i].salary;
        totalYearsEmployed += employees[i].yearsEmployed;
    }

    float averageSalary = count > 0 ? totalSalary / count : 0;
    float averageYearsEmployed = count > 0 ? static_cast<float>(totalYearsEmployed) / count : 0;

    outFile << endl;
    outFile << "The average number of years employed is " << averageYearsEmployed << endl;
    outFile << "The average salary is $" << averageSalary << endl;

    outFile.close();
}
