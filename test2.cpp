#include <iostream>
#include <string>

using namespace std;

int main() {

    enum data {
        MON, TUES, WED
    };

    int datas[3];

    data blah;

    for (blah = MON; blah <= WED; blah = static_cast<data>(blah + 1)) {
        cout << "Enter the sales for day " << blah << ": ";
        cin >> datas[blah];

    }

    return 0;
}