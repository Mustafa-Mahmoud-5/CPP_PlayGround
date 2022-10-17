#include <iostream>
#include <vector>
using namespace std;

int main() {
    // in this solution i will push first then start playing with the 2d vector for more challenge
    vector <vector<int>> vector_2d;

    vector <int> vector1;
    vector <int> vector2;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    vector_2d[0].push_back(10);
    vector_2d[0].push_back(20);

    vector_2d[1].push_back(100);
    vector_2d[1].push_back(200);


    cout << "---vector1---" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << "size: " << vector_2d.at(0).size() << endl;

    cout << "---vector2---" << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    cout << "size: " << vector_2d.at(1).size() << endl;


    vector_2d.at(0).at(0) = 1000; // not same as in course

    cout << "---vector1---" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << "size: " << vector_2d.at(0).size() << endl;


    cout << "---vector_2d---" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;


    return 0;
}