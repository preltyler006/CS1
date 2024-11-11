#include <iostream>
#include <string>
using namespace std;

int main() {
    char string1[30] = "In the Garden"; 
    char string2[15] = "of Eden"; 
    strcat(string1,string2);
    cout << string1;


    return 0;
}