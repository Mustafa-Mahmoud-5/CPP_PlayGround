/*  FUNCTION OVERLOADING
 * it is a form of polymerphysim which we will get to later in oop
 * simply means use the same name but with different forms and use cases
 * we use this concept when we want to accomplish a task of very close logic
 * like find_area(), find_length(), find_person(), print(), print whatever func takes
 *
 * Imagine the function print, it could print string, double, int, vector.
 * instead of having print_string, print_vector, print_double ..etc
 *
 * Imagine the function length(), it works with strings, vectors, arrays, maps
 * but for sure the implementation differs, at least with maps
 * instead of having map_length(),string_length(),just try to be consistent with length()
 *
 * If you work with databases, you gotta notice that they have findByName, FindById,..etc
 * and they also have a function called find(), just find.
 *
 *
 * Don't overuse Function overloading, neither do with polymerphysim, just when useful.
 * */




#include <iostream>
#include <vector>
#include <string>
using namespace std;

// IN this example, c++ restricts us to define the data type of the parameter
// and we want to make function for printing, so you will have to make different function
// for string, vector<int>, vector<string>, int, ...etc
// instead we will name the functions the same using the function overloading concept
// depending on the parameter data type, the compiler will determine which one to use


void print(string s, bool chars) {
    if(chars) {
        for(char c: s) {
            cout << c << " ";
        }
        cout << "\n";
    } else {
        cout << s << "\n";
    }
}

void print(vector<int>v) {
    for(int i: v) {
        cout << i << " ";
    }
    cout << "\n";
}

void print(vector<string>v) {
    for(string s: v) {
        cout << s << " ";
    }
    cout << "\n";
}


int main () {
    vector<int>grades = {11,17,15,12,10,14};
    vector<string>names = {"Mustafa", "Muhammed", "Ahmed"};
    print("Mustafa", false);
    print("Mustafa", true);
    print(grades);
    print(names);
    // same function name, close logic, different function implementations based on params
}

