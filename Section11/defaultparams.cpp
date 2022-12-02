// QUOTE: If something is always required, then it should never be required.

#include <iostream>
using namespace std;

double salary(double bonus, int hours_per_day = 8, double per_hour = 10);

int main () {
    // the two default params will be used
    cout << "Your monthly salary is: " << salary(0);
}

double salary(double bonus, int hours_per_day, double per_hour) {
    double salary = bonus + (hours_per_day * per_hour * 5 * 4);
    return salary;
}
