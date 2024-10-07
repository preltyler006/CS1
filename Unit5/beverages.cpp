#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    int ppl = 0;
    int coffee = 0;
    int tea = 0;
    int coke = 0;
    int oj = 0;

    do {
    cout << "Please input the favorite beverage of person #1. Choose 1, 2, 3, or 4 from the above menu or -1 to exit the pogram" << endl;
    cin >> choice;
    ppl++;

    switch(choice){
        case 1:
            coffee = coffee + 1;
        case 2:
            tea = tea + 1;
        case 3:
            coke = coke + 1;
        case 4:
            oj = oj + 1;
        case -1:
            break;
        default:cout << "Selection is invalid" << endl;
                    cout << " Try again please" << endl;
        
    }
    }
    while (choice != -1);

    cout << "The total number of people surveyed is " << ppl -1 << ". The results are as follows: " << endl;
    cout << "Beverage        Number of Votes" << endl;
    cout << "*******************************" << endl;
    cout << "Coffee         " << coffee << endl;
    cout << "Tea            " << tea << endl;
    cout << "Coke           " << coke << endl;
    cout << "Orange Juice   " << oj << endl;
    return 0;
}