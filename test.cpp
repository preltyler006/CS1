#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    fstream file;

    file.open("./games.txt", ios::in);

    string line;
    string num;

    while(getline(file, line)) {
        num = line;
    }

    file.close();

    file.open("./games.txt", ios::out);

    for (int i = 0; i <= stoi(num) + 2; i++) {
        cout << i << endl;
        file << i << endl;
    }

    file.close();

    return 0;
}