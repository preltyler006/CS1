#include <iostream>
#include <cstring> // For strlen function

using namespace std;

int main() {
    const int MAX_LENGTH = 50;
    char str[MAX_LENGTH];

    cout << "Enter a string: ";
    cin.getline(str, MAX_LENGTH);

    int length = strlen(str);
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
