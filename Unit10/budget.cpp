#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

const int NAMESIZE = 15;

struct budget {
    char name[NAMESIZE + 1]; // person's name
    float income;            // person's monthly income
    float rent;              // person's monthly rent
    float food;              // person's monthly food bill
    float utilities;         // person's monthly utility bill
    float miscell;           // person's other bills
    float net;               // person's net money after bills are paid
};

int main() {
    fstream indata;   // input/output binary file
    ofstream outdata; // output file for student

    indata.open("income.dat", ios::out | ios::binary); // open file as binary
    outdata.open("student.out"); // output file we will write student information to
    outdata << left << fixed << setprecision(2);

    budget person; // defines person to be a record

    cout << "Enter the following information" << endl;
    cout << "Person's name: ";
    cin.getline(person.name, NAMESIZE);
    cout << "Income: ";
    cin >> person.income;

    // Read in other fields
    cout << "Rent: ";
    cin >> person.rent;
    cout << "Food: ";
    cin >> person.food;
    cout << "Utilities: ";
    cin >> person.utilities;
    cout << "Miscellaneous: ";
    cin >> person.miscell;

    // Calculate net income
    person.net = person.income - (person.rent + person.food + person.utilities + person.miscell);

    // Write the record to the binary file
    indata.write(reinterpret_cast<char*>(&person), sizeof(person));

    indata.close();

    // Reopen the file as an input file
    indata.open("income.dat", ios::in | ios::binary);

    // Read the record from the binary file
    indata.read(reinterpret_cast<char*>(&person), sizeof(person));

    // Write information to the output file
    outdata << setw(20) << "Name" << setw(10) << "Income"
            << setw(10) << "Rent" << setw(10) << "Food"
            << setw(15) << "Utilities" << setw(15) << "Miscellaneous"
            << setw(10) << "Net Money" << endl;

    outdata << setw(20) << person.name
            << setw(10) << person.income
            << setw(10) << person.rent
            << setw(10) << person.food
            << setw(15) << person.utilities
            << setw(15) << person.miscell
            << setw(10) << person.net << endl;

    indata.close();
    outdata.close();

    return 0;
}
