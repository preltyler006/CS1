#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char userStr[50];
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int counter = 0;

    cout << "Enter your string" << endl;
    cin.getline(userStr, 50, '\n');

    for (int i = 0; i < strlen(userStr); i++) {
        bool isVowel = false;
        for (int j = 0; j < 5; j++) { 
            if (userStr[i] == vowels[j]) {
                isVowel = true;
                break; 
            }
        }
        
        if (!isVowel && isalpha(userStr[i])) { 
            counter++;
        }
    }

    cout << "There are " << counter << " consonants in your string" << endl;
    return 0;
}
