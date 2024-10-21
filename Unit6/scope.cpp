#include <iostream> 
#include <iomanip> 
using namespace std;

// This program will demonstrate the scope rules.
// PLACE YOUR NAME HERE
const double PI = 3.14; 
const double RATE = 0.25;
void findArea(float, float&);
void findCircumference(float, float&);

int main() {
    cout << fixed << showpoint << setprecision(2); 
    float radius = 12;
    
    cout <<" Main function outer block" << endl;
    cout <<" PI, RATE, and radius are active here" << endl << endl; 
    {
    float area;
    cout << "Main function first inner block" << endl;
    cout << "PI, RATE, radius and area are active here" << endl << endl;
    // Fill in the code to call findArea here
    findArea(radius, area);
    cout << "The radius = " << radius << endl;
    cout << "The area = " << area << endl << endl; 
}

{
        float radius = 10; float circumference;
        cout << "Main function second inner block" << endl;
        cout << "PI, RATE, radius and circumference are active here" << endl << endl;
        // Fill in the code to call findCircumference here

        findCircumference(radius, circumference);
        cout << "The radius = " << radius << endl;
        cout << "The circumference = " << circumference << endl << endl;
}
    cout << "Main function after all the calls" << endl;
    cout << "PI, RATE, and radius" << endl << endl;
    
    return 0;
    
}

void findArea(float rad, float& answer) {
    cout << "AREA FUNCTION" << endl << endl;
    cout << "PI, RATE, rad and answer are active here"<< endl << endl;
    answer = PI * (rad*rad);
}


void findCircumference(float length, float& distance) {
    cout << "CIRCUMFERENCE FUNCTION" << endl << endl;
    cout << "PI, RATE, length, and distance are active here" << endl << endl;
    // FILL in the code, given that parameter length contains the radius, 
    // that will find the circumference to be stored in distance
    distance = 2 * PI * length;
}