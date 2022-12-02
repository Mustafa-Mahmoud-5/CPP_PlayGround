#include <iostream>
using namespace std;

void y() {
    cout << "Y\n";
    // fails();
}

void fails() {
    cout << "This can't be called or used in any function above it";
}

void x() {
    cout << "X\n";
    y();
}

void wrapper() {
    y();
    x();
}

int main() {
    wrapper();
}

// order matters, you can't call any function before it is initialized
// you also can't call any function X in another function Y unless the function X is above Y (unlike js)
// every function is called on compile, so any function you call in another one must have been initialized above