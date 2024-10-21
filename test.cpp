#include <iostream>
using namespace std;

void test(int);
// global variables are intialized automatically to 0 or null
// local variables need to be intialized manually by user
// static local variables are are defined and initialized only the first time the function is executed, default is 0

// int getSum(int, int=0, int=0);// OK
// int getSum(int, int=0, int); // NO



// use & after parameter to update value of argument outside of function without return call
// ex: 
// void doubleNum(int&)
// int main() {
//     int value = 4;
//     cout << doubleNum(value);
// }
// int doubleNum(int &refVar) {
//     refVar += 2;
// }



int main() {
    // // test(0);
    // int num, val = 12;
    // cout << val++; // displays 12,
    // // val is now 13;
    // cout << ++val; // sets val to 14,
    // // then displays it

    // num = --val; // sets val to 13,
    // // stores 13 in num
    // num = val--; // stores 13 in num,
    // // sets val to 12

    cout << static_cast<char>(99);
    cout << static_cast<int>(')');

    return 0;
}

void test(int num) {
    cout << "test working" << num << endl;
}