#include <iostream>
using namespace std;

int main() {
    //Initializing vs only Declaring

    double test_scores[3] = {10}; // try to test without the initializer

    // elements will be zero. because we initialize the array

    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "======================" << endl;

    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];

    cout << "======================" << endl;

    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nThis is the array's first element location in HEX: " << test_scores;
    return 0;
}