#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    fstream file("./games.txt", ios::app);

    string line = "naw ";

    file << line;


    file.close();

    return 0;
}