#include <iostream>
using namespace std;

int main () {
    int cents = 0;
    int dollars, quarters, dimes, nickels, pennies;
    cout << "Enter Cents: ";
    cin >> cents;

    dollars = cents / 100;
    cout << cents % 100 << endl;
    cents = cents % 100;


    quarters = cents / 25;
    cout << cents % 25 << endl;
    cents = cents % 25;


    dimes = cents  / 10;
    cout << cents % 10 << endl;
    cents = cents % 10;

    nickels = cents / 5;
    cout << cents % 5 << endl;
    cents = cents % 5;

    pennies = cents / 1;
    cout << cents % 1 << endl;


    cout << "==========Currency Distribution=========" << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}