#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double x = 4.7;
    double y = 4.70000001;
    double z = 4.6999999;
    double f = 5;
    double f2 = 4.999999999999;


    cout << (x == z || x == y || y == z) << "\n"; // false
    cout << (f == f2) << "\n"; // failed

    // to know if close numbers are equal we subtract them, get their float abs, floor the result, if zero, they are equal

    cout << (fabs(f-f2) <= 1e-10) << "\n";

    cout << "=============================ceil, floor, round==================================\n";

    int c1 = 9;
    int c2 = 4;
    cout << 9.0/4 << endl;
    cout << c1/c2 << "\n";
    cout << floor(c1/c2) << "\n";
    cout << ceil((double)c2/c1) << "\n";
    // if you want to floor or to get the whole number value, use int division
    // you should make it double division if you want the ceil or the round
    cout << "============================================ceil and round tricks=================================";

    int n1 = 5;
    int n2 = 2;

    double divison = (double)n1/n2;
    cout << divison << endl;
    // to get the ceil of a fraction, we change it to double and then use ceil()
    // or use int and this formula: ceil(x,y) is x + y-1 / y
    int the_ceil = (n1 + (n2 - 1)) /  n2;
    // to get the round of a fraction, we change it to double and use round()
    // or we use int and this formula: round(x,y) is x+y/2 : x > 0 or x-y / 2 : x < 0
    int the_round =  (n1 + n2) / n2;

    cout << the_ceil << " " << the_round << endl;

    cout << "================================Round to specific amount==========round(x,y) * y\n";

    double b1 = 48.145, nearest = 15;
    // round to the nearest element divisible by 15
    cout << round(b1/nearest) * nearest << "\n";

    // round to the nearest hundredth
    cout << round(b1 * 100) / 100;

    // idea is that we can't round decimals, so we add the desired decimals to the whole numbers, by multiplying a decimal by hundred, the point is moved two steps right
    // so, it becomes 4814.5
    // now we round/ceil/floor the number, we choose round to get the round based on the number itself
    // round(4814.5) = 4815
    // now, divide the result back again by 100 to be 48.15
}