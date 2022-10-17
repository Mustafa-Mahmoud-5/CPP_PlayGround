#include <iostream>
using namespace std;

int main () {
    // this section introduces program control flow tools(conditions, loops)
    // Sequence, conditions, iterations are three building blocks of computer programming, if you know when to use what, you will simply be able to solve any algoritm you want
    const int start = 10;
    const int end = 100;
    int inp = 0;

    cout << "ENTER A NUMBER (10-100): ";
    cin >> inp;


    bool on_boundaries = (inp == end || inp == start);
    if(on_boundaries)
        cout << "ON BOUNDARIES" << endl;

    bool between_range = (inp >= start && inp <= end);
    if(between_range)
        cout << "BETWEEN RANGE" << endl;

    bool out_of_boundaries = (inp < start || inp > end);
    if(out_of_boundaries)
        cout << "OUT OF BOUNDARIES" << endl;

    // problem with only if statement is that it is part of the sequence, meaning that more than one if statement may happen to be true, if we enter 100, it will be between range and on boundaries
    // in algorithms and app development we could utilize break statement or return to prevent moving to next line, don't think you can use the if and then make your else under the if, was "f" condition false you would think you're right, but if it was true, then the code under it also will be executed
    // that's why we need else statement to give us binary choice, if one happens to be true then there is no need for other, if not, then the other must be called

    bool check = false;
    cout << "0(false) or 1(true) ?: ";
    cin >> check;
    if(check) {
        cout << "It works!" << endl;
    }
    else {
        cout << "got into else block" << endl;
    }
    if(check || !check) {
        cout << "this works anyways. it follows in sequence";
    }
    return 0;
}