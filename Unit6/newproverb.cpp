// PLACE YOUR NAME HERE

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.
void writeProverb(string word);

int main ()
{
    string wordCode;

    cout << "Given the phrase:" << endl;
    cout << "Now is the time for all good men to come to the aid of their ___" << endl;
    cout << "Input your ending word" << endl;
    cin >> wordCode;
    cout << endl;

    writeProverb(wordCode);

    return 0;
}

// *******************************************************
//                         writeProverb
//
// task: This function prints a proverb. The function takes a number
//       from the call. If that number is a 1 it prints 
//       "Now is the time for all good men to come to the aid of their party."
//       Otherwise, it prints "Now is the time for all good men
//       to come to the aid of their country."
// data in: code for ending word of proverb (integer)
// data out: no actual parameter altered
//
// *******************************************************

void writeProverb(string word)
{
    cout << "Now is the time for all good men to come to the aid of their " << word << "." << endl;
}
