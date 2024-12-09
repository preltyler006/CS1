#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

// PLACE YOUR NAME HERE

int main()
{
    fstream inFile("./proverb.txt", ios::in); // Open file in read mode
    if (!inFile) {
        cerr << "Error: Unable to open the file." << endl;
        return 1;
    }

    long offset; // Variable to hold the user-entered offset
    char ch;     // Variable to hold the character read from the file
    char more;   // Variable to determine if user wants to continue

    do
    {
        // Output the current read position
        cout << "Current read position (from the end): " << inFile.tellg() << endl;

        cout << "Enter an offset from the end of the file: ";
        cin >> offset;

        // Move the read position by the specified offset from the end of the file
        inFile.seekg(-offset, ios::end);

        // Check if the new position is valid
        if (inFile.fail()) {
            cerr << "Error: Offset out of bounds. Resetting position." << endl;
            inFile.clear();  // Clear error flags
            inFile.seekg(0, ios::end); // Reset to the end of the file
        }

        // Get one byte of information from the file
        inFile.get(ch);

        if (inFile.eof()) {
            cerr << "Reached end of file. No character to read." << endl;
            inFile.clear();  // Clear the EOF flag
            inFile.seekg(0, ios::end); // Reset to the end of the file
            continue;
        }

        cout << "The character read is: " << ch << endl;

        cout << "If you would like to input another offset, enter Y: ";
        cin >> more;

        // Clear the EOF flag in case the end of the file was reached
        inFile.clear();

    } while (toupper(more) == 'Y');

    inFile.close(); // Close the file

    return 0;
}
