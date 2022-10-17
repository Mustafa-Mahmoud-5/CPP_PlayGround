#include <iostream>
using namespace std;

int main () {
    // Mathematical operators ( + - * / % )
    int x = 200;
    int y = 100;
    double res = 0;

    res = x / y;
    cout << res << endl;

    res = y / x; // 100 / 200 = 0 >> even we store in double, but integers division evaluates to integer even before we store them anywhere. keep that in mind, if u need double, then one of the operands must be so.
    cout << res << endl;


    double z = 100;
    res = z / x; // 100.0 / 200 = 0.5 >> double division
    cout << res << endl;

    cout << 2 * 3.6 << endl; // double multiplication


    // modules operator only works with integers otherwise you 'll have an error
    cout << 10 % 3 << endl; // >> 10 / 3 = 3.333 ,  3 * 3 = 9,   10 - 9 = 1 = reminder

    //PEMDAS >> Parentheses Exponents Multiplication division addition subtraction
    cout << 3 * 4 / 6 - 2 + 5<< endl;




   // make a euro to usd calculator



   cout << "Enter in EURO: ";
   double dollar = 0;
   double eur;
   const double change = 1.19;
   cin >> eur;
   dollar = eur * change;
   cout << "$" << dollar << endl;

    return 0;
}