#include <iostream>
using namespace std;

int main() {
    cout << "ENTER TWO INTS: ";
    int x, y;
    cin >> x >> y;
    cout << x << " " << y << endl;
    cout << boolalpha; // Use (true and false) instead of (1 and 0)
    cout << "EQUAL: " << (x == y) << endl;
    cout << "NOT EQUAL: " << (x != y) << endl;

    bool work = true;
    int projects = 4;
    int problem_solving_questions = 80;
    work = (problem_solving_questions >= 500 && projects >= 5);
    cout << "Not Work: " << !work << endl;


    double num =5;
    num /= 2;
    cout << num << endl;

    return 0;
}