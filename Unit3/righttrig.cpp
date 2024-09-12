#include <iostream> 
#include <iomanip>
#include <cmath> 
using namespace std;


int main() {
    float a,b;
    float hyp;

    // the smaller two sides of the triangle // the hypotenuse calculated by the program
    cout << "Please input the value of the two sides" << endl; 
    cin >> a >> b;
    // Fill in the assignment statement that determines the hypotenuse
    cout << "The sides of the right triangle are " << a << " and " << b << endl; 

    hyp = sqrt(pow(a, 2) + pow(b, 2));

    cout << setprecision(3) << "The hypotenuse is " << hyp << endl;
    return 0;
}