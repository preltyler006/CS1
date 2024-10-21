#include <iostream>
#include <iomanip>
using namespace std;

int winsFunc();
int lossesFunc();
float percentageOfWins(int, int);

int main() {


    cout << "Please input the number of wins" << endl;
    int wins = winsFunc();

    cout << "Please input the number of losses" << endl;
    int losses = lossesFunc();

    cout << "The percentage of wins is " << setprecision(4) << percentageOfWins(wins, losses) << "%" << endl;
    return 0;
}

int winsFunc() {
    int wins;
    cin >> wins;
    return wins;
}

int lossesFunc() {
    int losses;
    cin >> losses;
    return losses;
}

float percentageOfWins(int wins, int losses) {
    return 100 * static_cast<float>(wins) / (static_cast<float>(wins) + static_cast<float>(losses)) ;
}