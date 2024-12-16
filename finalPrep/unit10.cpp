#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream outfile;

    outfile.open("./data.txt", ios::out);

    if (outfile.is_open()) {
        for (int i = 1; i <= 10; i++) {
            outfile << i << endl;
        }
        outfile.close();
    } else {
        cerr << "File did not open" << endl;
    }

    ifstream infile;

    infile.open("./data.txt", ios::in);

    string line;

    while(getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();

}