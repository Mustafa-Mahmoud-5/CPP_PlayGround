#include <iostream>
using namespace std;

void one();
void two();
void go();
void x();
double circle_area(double);

// prototypes are initialized/defined in the top of file, and then we can create, use, call them in any order we wish
// otherwise, you would make sure you use or call every function after it is declared above
// functions declarations must be of the same name, parameters types, return value they 've been initialized

int main () {
    go(); // go() is declared after and we still can cal it without worrying about orders

    // 5
}


void go() {
    two();
    one();
    int r = 4;
    cout << circle_area(r);

    // 4
}

void one() {
    cout << "One\n";
    two(); // notice that two is declared down, and we still can call it though.

    // 2
}

void two() {
    cout << "Two\n";

    // 1
}

double circle_area(double r) {
    const double pi = 3.14;
    return pi * r * r;

    // 3
}
// numbered comments are the numbers of the order they should've been if we hadn't used prototypes

// Okay, but should i use prototypes everytime ?
// No, only use it when:
// 1- you have a lot of functions
// 2- these functions depend on each other(you have x, y, z) z is called in y, y is called in x , x is called in main
// if the functions don't depend on each other and are just called at the end in main, it is pointless cuz order
// wouldn't matter
