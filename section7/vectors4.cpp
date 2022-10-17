#include <iostream>
#include <vector>
using namespace std;

int main () {
// when you declare vectors you either initialize them with a size to give it some elements in it x(zeros) or you just leave it with no elements.
// in the first case you can add new elements using push and vec[idx] = x
// but if you don't initialize it, the only way to add elements is using push_back() because there is no elements in it to replace using the vector[idx] = x   way
    cout << "==================================" << endl;

    vector<int> vec;
//    vec[0] = 3; // this works only if "vec" already has elements
//    vec[1] = 4;
    vec.push_back(3);
    vec.push_back(4);
    cout << vec.at(0) << " " << vec.at(1) << endl;

    cout << "==================================" << endl;

    // if u initialize vectors with no pre-length, you can't add elements using vec[idx] = val

    //    vector <int> vect; >>>segmentation fault
    vector <int> vect (1);
    vect[1] = 1; // only if the vector is initialized
    vect[2] = 2;
    cout << vect[0];
    cout << vect[1];
    cout << vect[2];



    return 0;
}