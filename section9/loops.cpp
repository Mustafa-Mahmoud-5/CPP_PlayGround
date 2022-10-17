#include <iostream>
#include <vector>
using namespace std;
int main() {
    // while loop: condition based loop, condition is checked before each iteration
    // do-while loop: condition based loop, condition is checked after each iteration
    // for loop: loop a specific number of times (decided by given value)
    // range-based loop: one iteration for elements in the range of arrays or vectors or collections in general

    for(int i = 0; i < 4; i++) {
        cout << i << " ";
    }

    cout << "\n============\n";

    int arr[5];
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n============\n";

    // we can use the comma to initialize more than a variable, and iterate them also
    for(int i = 1, j = 1; i <= 5; i++, j++) {
        cout << i << " * " << j << " = " << (i*j) << '\n';
    }


    vector<double> scores;
    int subjects_count;
    cout << "Enter number of subjects: ";
    cin >> subjects_count;
    for(int i = 1; i<=subjects_count; i++) {
        double s = 0;
        cin >> s;
        scores.push_back(s);
    }

    cout << "YOUR SCORES: ";
    for(int i = 0; i < subjects_count; i++) {
        cout << scores[i] << " ";
    }

    cout << "\n============\n";

    int sum = 0;
    for(int i=1; i<=15; i+=2) {
        sum+=i;
    }
    cout << sum;


    return 0;
}