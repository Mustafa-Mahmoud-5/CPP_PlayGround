#include <iostream>
using namespace std;

int main() {
    const double tax_rate = 6.0;
    const double room_cost = 30.0;
    const int estimate_days = 30;
    int rooms;

    cout << "Estimate of carpet cleaning service\nPrice per room: $30\nSales Tax rate: 6%\nNumber of rooms:";

    cin >> rooms;

    int rooms_cost = rooms * room_cost;
    double tax = rooms_cost * tax_rate / 100;
    double total = rooms_cost + tax;

    cout << "Cost: $" << rooms_cost << endl;
    cout << "Tax (6%): " << "$" << tax << endl;
    cout << "===========================" << endl;
    cout << "Total estimate: " << "$"<<total << endl;
    cout << "The estimate is valid for " << estimate_days << " days" << endl;
    return 0;
}