#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;

const int MAX_RECORDS = 20;

struct Record {
    char firstName[16];       // 15 characters + null terminator
    char lastName[16];        // 15 characters + null terminator
    char streetAddress[31];   // 30 characters + null terminator
    char city[21];            // 20 characters + null terminator
    char state[6];            // 5 characters + null terminator
    long zip;                 // Long integer for zip code
};

void readRecords(Record records[], int& count);
void writeBinaryFile(const char* fileName, Record records[], int count);
void readBinaryFile(const char* fileName, Record records[], int& count);
void writeTextFile(const char* fileName, Record records[], int count);

int main() {
    Record records[MAX_RECORDS];
    int count = 0;

    // Step 1: Read records from the user
    readRecords(records, count);

    // Step 2: Write records to a binary file
    writeBinaryFile("./records.dat", records, count);

    // Step 3: Read records back from the binary file
    readBinaryFile("./records.dat", records, count);

    // Step 4: Write records to a text file
    writeTextFile("./records.txt", records, count);

    cout << "All operations completed. Check './records.txt' for output." << endl;
    return 0;
}

void readRecords(Record records[], int& count) {
    char more;
    count = 0;

    do {
        if (count >= MAX_RECORDS) {
            cout << "Maximum number of records reached!" << endl;
            break;
        }

        cout << "Enter the following information:" << endl;
        cout << "Person's First Name: ";
        cin.ignore();
        cin.getline(records[count].firstName, 16);
        cout << "Person's Last Name: ";
        cin.getline(records[count].lastName, 16);
        cout << "Street: ";
        cin.getline(records[count].streetAddress, 31);
        cout << "City: ";
        cin.getline(records[count].city, 21);
        cout << "State: ";
        cin.getline(records[count].state, 6);
        cout << "Zip: ";
        cin >> records[count].zip;

        count++;

        cout << "Enter a Y if you would like to input more data: ";
        cin >> more;

    } while (toupper(more) == 'Y');
}

void writeBinaryFile(const char* fileName, Record records[], int count) {
    ofstream outFile(fileName, ios::binary);
    if (!outFile) {
        cerr << "Error: Could not open file for writing." << endl;
        return;
    }
    outFile.write(reinterpret_cast<char*>(records), sizeof(Record) * count);
    outFile.close();
}

void readBinaryFile(const char* fileName, Record records[], int& count) {
    ifstream inFile(fileName, ios::binary);
    if (!inFile) {
        cerr << "Error: Could not open file for reading." << endl;
        return;
    }
    inFile.seekg(0, ios::end);
    count = inFile.tellg() / sizeof(Record);
    inFile.seekg(0, ios::beg);
    inFile.read(reinterpret_cast<char*>(records), sizeof(Record) * count);
    inFile.close();
}

void writeTextFile(const char* fileName, Record records[], int count) {
    ofstream outFile(fileName);
    if (!outFile) {
        cerr << "Error: Could not open file for writing." << endl;
        return;
    }

    outFile << left << setw(15) << "First Name" << setw(15) << "Last Name"
            << setw(30) << "Street" << setw(20) << "City" << setw(5) << "State"
            << setw(10) << "Zip Code" << endl;

    for (int i = 0; i < count; i++) {
        outFile << left << setw(15) << records[i].firstName
                << setw(15) << records[i].lastName
                << setw(30) << records[i].streetAddress
                << setw(20) << records[i].city
                << setw(5) << records[i].state
                << setw(10) << records[i].zip << endl;
    }

    outFile.close();
}
