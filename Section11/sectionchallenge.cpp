#include <iostream>
#include <vector>
#include <string>
using namespace std;
void message(string m = "List is empty");

void menu_options() {
    cout << "\n\n";
    cout << "P - Print Numbers\n";
    cout << "A - Add Numbers\n";
    cout << "M - Display mean\n";
    cout << "S - Display smallest\n";
    cout << "L - Display largest\n";
    cout << "D - Dash representation\n";
    cout << "C - Clear list\n";
    cout << "Q - Quit\n";
}

char get_option() {
    char l;
    cout << "\nEnter your choice: ";
    cin >> l;
    return tolower(l);
}

void print_numbers(vector<double> v) {
    cout << "[ ";
    for(double el: v) {
        cout << el << " ";
    }
    cout << "]";
    cout << "\n";
}

void add_numbers(vector<double> &v) {
    cout << "Enter Number: ";
    double n; cin >> n;
    v.push_back(n);
}

void mean(vector<double> v) {
    int len = v.size();
    if(!len) return message();
    double sum = 0;
    for(double el: v) {
        sum += el;
    }
    sum = (double)sum / len;
    cout << "Mean: " << sum << "\n";
}


void smallest(vector<double> v) {
    int len = v.size();
    if(!len) return message("List is empty");
    double smallest = v[0];
    for(double el: v) {
        if(el < smallest) {
            smallest = el;
        }
    }
    cout << "Smallest: " << smallest << "\n";
}


void largest(vector<double> v) {
    int len = v.size();
    if(!len) {
        message();
        return;
    }
    double largest = v[0];
    for(double el: v) {
        if(el > largest) largest = el;
    }
    cout << "Largest: " << largest << "\n";
}

void dash_representation(vector<double> v) {
    int len = v.size();
    if(!len) return message();
    for(int i = 0; i <= v.size(); ++i) {
        for(int j = 1; j <= v[i]; ++j) {
            cout << "_ ";
        }
        cout << "\n";
    }
}

void clear_list(vector<double> &v) {
    v.clear();
}

void message(string m) {
    cout << "\n" << m << "\n";
}

void menu() {
    vector<double>numbers;
    char l;

    do {
        menu_options();
        l = get_option();

        if(l == 'p') {
            print_numbers(numbers);
        } else if(l== 'a') {
            add_numbers(numbers);
        } else if(l=='m') {
            mean(numbers);
        } else if(l=='s') {
            smallest(numbers);
        } else if(l=='l') {
            largest(numbers);
        } else if(l=='d') {
            dash_representation(numbers);
        } else if(l=='c') {
            clear_list(numbers);
        } else if(l == 'q') {
            message("Exiting...");
        } else {
            message("Sorry, option is not on the list.");
        }

    } while (l != 'q');
}

int main() {
    menu();
    return 0;
}