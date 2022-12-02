#include <iostream>
#include <vector>
using namespace std;

void clear_vec(vector<int> &v) {
    v.clear();
}

void print_vec(const vector<int> &v) {
    for(int el: v) {
        cout << el << " ";
    }
    cout << endl;
}

void add_count(string &name) {
    name+= to_string(name.length()); // this is the same as argument += ....
    // name, passed-in argument, both vars refer now to the same memory location
    // name -> param -> 0xe1367 -> val
    // in copy:
    // name   -> oxe1 -> val
    // param  -> 0xe2 -> val
}

int main() {
    string x = "Mustafa";
    add_count(x);
    cout << x << "\n";


    vector<int> my_v = {5,6,7,8};
    print_vec(my_v);
    clear_vec(my_v);
    print_vec(my_v);
}