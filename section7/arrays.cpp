// Created by Dell on 9/8/2022.

#include <iostream>
using namespace std;

int main() {

    // declaring arrays must be accompanied by its given size else an error will pop up
    // initialize the array i.e >> {} or {0}
    // if you don't know the size of the array but know the elements you need to put then put the elements without size and size will be auto-detected

    // Bad practice, initialize the array
    int a[5]; // array of length 5, but random values will be placed that's why the best practice is to initialize it with one element of value zero at least

    // good practice
    int b[5] = {0}; //size 5, first is zero, other 4 will be zeroes as well, best practice.

    // Best way if you know not your length
    double scores [] = {50, 20, 32.1, 42}; // size is auto detected

    // X Don't do that, not sure about the length ? don't put a length.
    double scores2 [5] = {50, 20, 32.1, 42}; // size is given to be 5, 4 elements only will be stored, fifth element will be of value zero


    //Same behaviour >> put first element 0 or not, will be fine, and three elements will be zeroes
    double test_scores[3] = {};
    double test_scores2[3] = {0};

    cout << a[2] << endl; // 55 >> random value cuz we didn't initialize it
    cout << b[2] << endl; // 0
    cout << scores[3] << endl;
    cout << scores2[4] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores2[1] << endl;

    return 0;
}
