#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int quantity; 
    float itemPrice;
    float totalBill;
    string itemName;


    // contains the amount of items purchased 
    // contains the price of each item
    // contains the total bill.

    cout << setprecision(2) << fixed << showpoint; // formatted output
    cout << "Please input the name of the item" << endl;

    getline(cin, itemName);

    cout << "Please input the number of items bought" << endl;

    // Fill in the input statement to bring in the quantity.
    cin >> quantity;

    // Fill in the prompt to ask for the price.
    cout << "Please input the price" << endl;

    // Fill in the input statement to bring in the price of each item. 
    cin >> itemPrice;

    // Fill in the assignment statement to determine the total bill.
    totalBill = quantity * itemPrice;

    // Fill in the output statement to print total bill, 
    // with a label to the screen.
    cout << "The item that you bought is " << itemName << endl;
    cout << "The total bill is $" << totalBill;

    return 0;
}