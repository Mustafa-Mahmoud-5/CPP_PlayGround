#include <iostream>
using namespace std;

int main () {
    // ++Variable increments the variable before using it, it returns the value to be used
    // Variable++ increments the variable but after using it, used only to simply increment by 1

    int x = 5;
    int y = 5;
    cout << x++ << " " << x << endl;
    cout << ++y << " " << y << endl;

    // we can use the preIncrement operator for complex and in quick access situations

    int a = 5;
    int b = 5;

    cout << 10 + ++a << " " << a << endl; // same as a = a + 1; cout << a +10;
    cout << 10 + b++ << " " << b << endl; // same cout << 10 + b; b++;


    return 0;
}