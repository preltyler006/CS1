#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string fort = "fort";
    string nite = "nite";


    char ca = 'e';
    char upper = toupper(ca);
    cout << upper << endl;

    char fortnite[10] = "fortnite";
    string phrase = fort + nite;
    cout << phrase << endl;
    cout << fort << endl;
    cout << fortnite;

    return 0;
}