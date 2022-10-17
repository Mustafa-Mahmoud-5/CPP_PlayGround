#include <iostream>
#include <vector>
using namespace std;

int main() {
//    vector <double> nums (3); // init three 0 elements
    vector <double> nums {7,8,9};

    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;
    cout << nums[6] << endl;

    cout << "enter 3 numbers" << endl;
    cin >> nums[0] >> nums[1] >> nums[2];

    cout << "---Updates---" << endl;
    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;


    int x = 0;

    cout << "enter a new test score: ";
    cin >> x;
    nums.push_back(x);

    cout << "Enter another test score: ";
    cin >> x;
    nums.push_back(x);


    cout << "---Updates---" << endl;
    cout << nums.at(0) << endl;
    cout << nums.at(1) << endl;
    cout << nums.at(2) << endl;
    cout << nums.at(3) << endl;
    cout << nums.at(4) << endl;

    int vector_size = nums.size();
    cout << "Vector Size: " << vector_size << endl;

    return 0;
}