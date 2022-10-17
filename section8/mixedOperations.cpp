#include <iostream>
using namespace std;

int main () {
    // MIXED DATA TYPES OPERATIOSN
    // c++ classifies data types in lower vs higher types, lower are anything we small size, same for higher
    // c++ automatically converts from lower to higher (int to double)

    int x = 5;
    int z = 2;
    int a = 6;
    double y = 5.5;
    double res;

    cout << x * y << " " << x + y << endl; // x(int 5) promoted into double(5.0) to give a double

    a = y; cout << a << endl; // a(int) = y(double), y demoted to int losing its decimal value

    y = z; cout << y << endl; // y(double) = z (int), int will be promoted to double

    res = x / 2; cout << res << endl; // x(int) / 2(int)>>2.5>>integer division>>demoted>> 2


    // conversion from higher to lower is hard called demotion or coercion
    // we can demote the value ourselves if the compiler can't do using static_cast<type>(value)

    int c = 30;
    int d = 25;
    cout << c / static_cast<double>(d) << endl;

//    ------------------------------

    cout << "ENTER SUM AND TOTAL" << endl;
    int sum, total;
    cin >> sum >> total;
    cout << "AVG: " << static_cast<double>(sum) / total; // double / int >> int promoted to double, double division, gives double

    cout << "ENTER THREE NUMBERS: " << endl;
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int s = num1 + num2 + num3;
    cout << "AVG: " << static_cast<double>(s) / 3 << endl;
//    cout << "AVG: " << double(s) / 3 << endl; OLD STYLE
//    double(value) ==>  static_cast<double>(value)



    return 0;
}