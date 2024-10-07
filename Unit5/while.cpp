#include <iostream> 
using namespace std;

int main() {

    char letter = 'a';
    do {
        cout << "Please enter a letter" << endl;
        cin >> letter;
        cout << "The letter you entered is " << letter << endl;
        cout << "The letter you entered is not x!" << endl;
    }
    while (letter != 'x');
    
    return 0; 
}