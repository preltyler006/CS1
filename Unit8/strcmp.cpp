#include <iostream>
using namespace std;

int main () {
    char str1[25];
    char str2[25];

    cout << "Please input the first name" << endl;
    cin.getline(str1, 25, '\n');
    cout << "Please input the second name" << endl;
    cin.getline(str2, 25, '\n');


    cout << "The names are as follows" << endl;

    if(strcmp(str1, str2) < 0) { 
        cout << str1 << endl << str2 << endl;
    } else if (strcmp(str1, str2) > 0) {
        cout << str2 << endl << str1 << endl;
    } else {
        cout << str1 << endl << str1 << endl;
        cout << "The names are the same" << endl;
    }

}