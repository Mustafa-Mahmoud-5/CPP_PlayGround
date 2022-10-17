#include <iostream>
using namespace std;

int main () {

    // x = y means move what's on left to what's on right, it doesn't mean equality like math
    // compiler checks if its is possible to convert the right side to the left side based on their data type
    // we use the memory location for the variable on right, the value of the variable on left
    // L-Value = R-value
    // Location in memory = value
    int x = 0;
    x = 40;
    cout << x << endl;

    // multiple Assignment is used when we need to assign the same value for multiple variables
    int y = 0;
    x = y = 50;
    cout << x << " " << y << endl;

    return 0;
}