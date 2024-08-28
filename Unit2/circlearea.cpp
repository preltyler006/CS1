#include <iostream> 
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main() {

    float area; 
    
    float circumference;

    circumference = 2 * PI * RADIUS;
    
    area = PI * (RADIUS*RADIUS); // computes area

    cout << "The circumference of the circle is " << circumference << endl;
    cout << "The area of the circle is " << area;

    return 0;
}
