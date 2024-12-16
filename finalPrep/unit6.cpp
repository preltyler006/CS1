#include <iostream>
using namespace std;

int getsum(int, int);

int main() {
    
    cout << getsum(10, 20);

    return 0;
}

int getsum(int num1, int num2) {
    return num1+num2;
}