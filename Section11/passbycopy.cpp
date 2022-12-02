// When functions are called, the parameters are created in memory and they take space
// when we pass arguments to them, the parameters take a copy of that argument value, just a copy, like var1 = var2
// that means the function deals with a new variable other than the one we pass to. it does't change args values

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void make_change(vector<string>vec) {
    vec.clear();
}

void print_vector(vector<string> vec) {
    for(string s: vec) {
        cout << s << " ";
    }
    cout << endl;
}


int main() {
    vector<string> students = {"Mustafa", "Muhammed", "Ahmed"};
    make_change(students);
    print_vector(students);
    // make_change takes a vector, we pass students, the parameter takes a copy of the students vector content
    // changes are done to that parameter only, the argument var is safe, has nothing to do with the param after passing
}