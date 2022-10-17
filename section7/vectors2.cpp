#include <iostream>
#include <vector>
using namespace std;

int main() {
    //Vector methods

    vector<double> test_scores {41,47,80,39};

    // ________________vector_name.at(idx) for bounds check________________________________

    cout << test_scores[5] << endl;
    // cout << test_scores.at(4); // ERROR: out_of_range

    // ____________________vector_name.push_back(element)_________________________
    test_scores.push_back(10); // must be of same vector type
    cout << test_scores[4] << endl;


    vector<double> salaries (2); // vector initialized with two elements of val zero
    cout << salaries[0] << endl;
    cout << salaries[1] << endl;
    salaries.push_back(99999);
    cout << salaries[2] << endl;



    //_____________________________________vector_name.size()______________________________
    cout << salaries.size() << endl;


    return 0;
}