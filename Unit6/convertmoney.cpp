#include <iostream> 
#include <iomanip> 
using namespace std;

// This program will input American money and convert it to foreign currency
// PLACE YOUR NAME HERE
// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen); 
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

int main () {
    float dollars;
    float euros; 
    float pesos; 
    float yen;

    cout << fixed << showpoint << setprecision(2);
    cout << "Please input the amount of American Dollars you want converted " << endl;
    cout << "to euros and pesos" << endl; 
    cin >> dollars;
    // Fill in the code to call convertMulti with parameters dollars, euros, and pesos 
    // Fill in the code to output the value of those dollars converted to both euros 
    // and pesos
    convertMulti(dollars, euros, pesos);
    cout << "$" << dollars << " in euros is " << euros << " and in pesos is " << pesos << endl;


    cout << "Please input the amount of American Dollars you want converted\n"; 
    cout << "to euros, pesos and yen" << endl;
    cin >> dollars;
    // Fill in the code to call convertMulti with parameters dollars, euros, pesos and yen 
    // Fill in the code to output the value of those dollars converted to euros,
    // pesos and yen
    convertMulti(dollars, euros, pesos, yen);
    cout << "$" << dollars << " in euros is " << euros << " and in pesos is " << pesos << " and in yen is " << yen << endl;

    cout << "Please input the amount of American Dollars you want converted\n"; 
    cout << "to yen" <<endl;
    cin >> dollars;
    // Fill in the code to call convertToYen
    // Fill in the code to output the value of those dollars converted to yen
    convertToYen(dollars);

    cout << "Please input the amount of American Dollars you want converted\n"; 
    cout << " to euros" << endl;
    cin >> dollars;
    // Fill in the code to call convert ToEuros
    // Fill in the code to output the value of those dollars converted to euros
    convertToEuros(dollars);

    cout << "Please input the amount of American Dollars you want converted\n"; 
    cout << " to pesos " << endl;
    cin >> dollars;
    // Fill in the code to call convertToPesos
    // Fill in the code to output the value of those dollars converted to pesos
    convertToPesos(dollars);
    
    return 0;
}

void convertMulti(float dollars, float& euros, float& pesos){
    cout << "The function convertMulti with dollars, euros and pesos " << endl << " was called with " << dollars << " dollars" << endl << endl;
    euros = dollars * 1.06;
    pesos = dollars * 9.73;
}

void convertMulti(float dollars, float& euros, float& pesos, float& yen){
    cout << "The function convertMulti with dollars, euros, pesos and yen" << endl << " was called with " << dollars << " dollars" << endl << endl;
    euros = dollars * 1.06;
    pesos = dollars * 9.73;
    yen = dollars * 124.35;
}

float convertToYen(float dollars) {
    cout << "The function convertToYen was called with " << dollars << " dollars" << endl << endl;
    cout << "$" << dollars << " in yen is " << (dollars * 124.35);
    return 0;
}

float convertToEuros(float dollars) {
    cout << "The function convertToEuros was called with " << dollars << " dollars" << endl << endl;
    cout << "$" << dollars << " in euros is " << (dollars * 1.06);

    return 0;
}

float convertToPesos(float dollars) {
    cout << "The function convertToPesos was called with " << dollars << " dollars" << endl << endl;
    cout << "$" << dollars << " in pesos is " << (dollars * 9.73);

    return 0;
}
