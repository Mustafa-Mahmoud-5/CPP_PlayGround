#include <iostream>
#include <vector>
using namespace std;

int main () {
    // 2D vectors _________vector<vector<data_type>> vector_name {{}, {}}

    // cinema chairs  1 2 3
    //                4 5 6


    vector<vector<int>> cinema_chairs {{1,2,3}, {4,5,6}};

    cout << "---First row---" <<endl;
    cout << cinema_chairs[0][0] << endl;
    cout << cinema_chairs[0][1] << endl;
    cout << cinema_chairs[0][2] << endl;


    cout << "---Second row---" << endl;
    cout << cinema_chairs.at(1).at(0) << endl;
    cout << cinema_chairs.at(1).at(1) << endl;
    cout << cinema_chairs.at(1).at(2) << endl;


    cout << "---enter a new row---" << endl;
    vector<int> v (3);
    cinema_chairs.push_back(v);
    cin >> cinema_chairs[2][0] >> cinema_chairs[2][1] >> cinema_chairs[2][2];

    cout << "---third row---" << endl;
    cout << cinema_chairs.at(2).at(0) << endl;
    cout << cinema_chairs.at(2).at(1) << endl;
    cout << cinema_chairs.at(2).at(2) << endl;




    return 0;
}