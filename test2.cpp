#include <iostream>
#include <fstream>
using namespace std;

struct car {
    int year;
    string make;
};

void writeToBinary(fstream& file, car cars[], string listOfCars[]);

void readFromBinary(fstream& file);

const int MAX_LENGTH = 10;

int main() {

    car cars[MAX_LENGTH];

    string listOfCars[MAX_LENGTH] = {
        "Lexus", "Toyota", "Acura", "Honda", "Ford", "Chevy", "Mitsubishi", "BMW", "Hyundai", "Fiat"
    };


    fstream file;

    file.open("./test2.dat", ios::binary | ios::out);

    writeToBinary(file, cars, listOfCars);
    file.close();

    file.open("./test2.dat", ios::binary | ios::in);

    readFromBinary(file);
    file.close();

    return 0;
}

void writeToBinary(fstream& file, car cars[], string listOfCars[]) {
    for (int i = 0; i < MAX_LENGTH; i++) {
        cars[i].make = listOfCars[i];
        cars[i].year = 2000 + i;

        file.write(reinterpret_cast<char*>(&cars[i]), sizeof(cars[i]));
    }
    
}

void readFromBinary(fstream& file) {
    car placeholderCar;

    while(file.read((char*)&placeholderCar, sizeof(placeholderCar))) {
        cout << placeholderCar.make << "  " << placeholderCar.year << endl;
    }
}





// ifstream = input = writing to file

// ofstream = output = reading from file

// write to binary: file.write(reinterpret_cast<char*>(&struct[i]), sizeof(struct[i]));
// read from binary: 
/*
    struct structPlaceholder;
    while(file.read((char*)&structPlaceholder, sizeof(structPlaceholder))) {
        cout << structPlaceholder.attribute1 << endl;
        cout << structPlaceholder.attribute2 << endl;
    }
*/
