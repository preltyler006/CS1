#include <iostream> 
#include <iomanip> 
using namespace std;
// PLACE YOUR NAME HERE
void normalizeMoney(float& dollars, int cents = 150);
// This function takes cents as an integer and converts it to dollars // and cents. The default value for cents is 150 which is converted // to 1.50 and stored in dollars

int main() {
    int cents; 
    float dollars;
    
    cout << setprecision(2) << fixed << showpoint;
    
    cents = 95;
    
    cout << "\n We will now add 95 cents to our dollar total\n";
    // Fill in the code to call normalizeMoney to add 95 cents
    normalizeMoney(dollars, cents);

    cout << "Converting cents to dollars resulted in " << dollars << " dollars\n"; 
    cout << "\n We will now add 193 cents to our dollar total\n";
    // Fill in the code to call normalizeMoney to add 193 cents
    normalizeMoney(dollars, cents+98);

    cout << "Converting cents to dollars resulted in " << dollars << " dollars\n"; 
    cout << "\n We will now add the default value to our dollar total\n";
    // Fill in the code to call normalizeMoney to add the default value of cents
    normalizeMoney(dollars, cents);

    cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
    return 0;
}

void normalizeMoney(float& dollars, int cents) {

    float total = 0;
    // Fill in the definition of sum as a static local variable
    static float sum = 0.0;
    // Fill in the code to convert cents to dollars
    dollars = static_cast<float>(cents) / 100;

    total = total + dollars; 
    sum = sum + dollars;
    
    cout << "We have added another $" << dollars <<" to our total" << endl; 
    cout << "Our total so far is $" << sum << endl;
    cout << "The value of our local variable total is $" << total << endl;
}