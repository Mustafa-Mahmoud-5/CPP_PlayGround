#include <iostream>
#include <vector>
using namespace std;

int main () {
//    -------------------------Vector--------------------------------int

    // fill initialized vector (WORKS)

    vector<int> vector_a {1};

//    vector_a[1] = 50;
    vector_a[2] = 40;

    cout << vector_a[0] << endl;
    cout << vector_a[1] << endl;
    cout << vector_a[2] << endl;
    cout << vector_a[3] << endl;


    // fill a predefined-length vector (WORKS)

    vector<int> vector_b (1);

//    vector_b[1] = 40;
    vector_b[2] = 50;

    cout << "================" << endl;
    cout << vector_b[0] << endl;
    cout << vector_b[1] << endl;
    cout << vector_b[2] << endl;
    cout << vector_b[3] << endl;


    // fill empty (uninitialized) vector (FAILS)

    /*
    vector<int> vector_c;

    vector_c[0] = 99;
    vector_c[1] = 99;
    vector_c[2] = 99;
    cout << "=======" << endl;
    cout << vector_c[0] << endl;
    cout << vector_c[1] << endl;
    cout << vector_c[2] << endl;
*/

//    -------------------------------------Array--------------------

   // fill an array with initializer (WORKS)
    int arr_c[] = {60,65};

//    arr_c[0] = 4;
    arr_c[1] = 5;
    arr_c[2] = 6;

    cout << "========Arrays======" << endl;
    cout << arr_c[0] << endl;
    cout << arr_c[1] << endl;
    cout << arr_c[2] << endl;
    cout << arr_c[3] << endl;



    // fill an initialized array (WORKS)
    int arr_b[2] = {};

    arr_b[0] = 95;
//    arr_b[1] = 96;
    arr_b[2] = 97;

    cout << "========" << endl;
    cout << arr_b[0] << endl;
    cout << arr_b[1] << endl;
    cout << arr_b[2] << endl;
    cout << arr_b[3] << endl;



    // fill uninitialized array (WORKS)
    int arr_a[2];

    arr_a[1] = 300;
//    arr[2] =301; // CAN't (out of range)

    cout << "=====" << endl;
    cout << arr_a[0] << endl;
    cout << arr_a[1] << endl;
    cout << arr_a[2] << endl;

    return 0;
}

/*
 conclusion:
 1- uninitialized vector doesn't reserve memory space, that's why we can't add to it

 2- initialized vector takes a predefined length, it reserves memory, we can add to it

 2-both initialized and uninitialized arrays take length, so they reserve memory, we can add to them
 */