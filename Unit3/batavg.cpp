#include <iostream> 
#include <iomanip>
using namespace std;

const int AT_BAT = 421; 
const int HITS = 123;
int main() {
    float batAvg;
    batAvg = static_cast<double>(HITS) / static_cast<double>(AT_BAT);
    cout << "The batting average is " << batAvg << endl;
    return 0;

}
