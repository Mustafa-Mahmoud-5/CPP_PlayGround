#include <iostream>
#include <vector>
using namespace std;


int main () {

    vector<double> test_scores; // dynamic length
    double test_scores2[100]; // you have to give a predefined length

//    cout << test_scores[5] << endl; >> segmentation fault

    vector<int> x (5); // init with 5 elements "Zeros", can grow
    int y[5] = {}; // same but have to init the array "{}", can't grow
    cout << x[0] << endl << x[4] << endl;

    cout << "out of bounds access" << endl;
    cout << x[10] << endl << y[10] << endl;

    // don't know the length of a given list ? both works fine
    vector <char> vowels1 {'a','e','o','y','u'};
    char vowels2[] = {'a','e','o','y','u'};
    cout << vowels1[3] << endl << vowels2[3] << endl;

    // need to make a vector with a specific length, all its elements are of the same value ?
    vector <double> year_temperatures (50, 80.0);
    cout << year_temperatures[20];




//    vector <char> m {'a', 'a', 'a'}; is the same as: vector <char> m (3,'a');
    return 0;
}