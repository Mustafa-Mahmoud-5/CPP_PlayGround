#include <iostream>
#include <vector>
using namespace std;
int main() {
    // the app written here is a simple console system that applies the same technique console apps use like git

    // we know that we need to at least show the data once, so we need do while loop or while true with break statement

    char l;
    vector<double> vec;
    do {
        // menu
        cout << "\n\n";
        cout << "P - Print Numbers\n";
        cout << "A - Add Numbers\n";
        cout << "M - Display mean\n";
        cout << "S - Display smallest\n";
        cout << "L - Display largest\n";
        cout << "D - Dash representation\n";
        cout << "C - Clear list\n";
        cout << "Q - Quit\n";
        cout << "\nEnter your choice: ";
        cin >> l;
        cout << "\n";
        // logic

        if(l == 'P' || l == 'p') {
            // print numbers
            cout << "[ ";
            for(double el: vec) {
                cout << el << " ";
            }
            cout << "]";
        } else if (l == 'A' || l == 'a') {

            // add
            double x;
            cout << "Add: ";
            cin >> x;
            vec.push_back(x);

        } else if (l == 'M' || l == 'm') {

            // mean
            if(vec.size()) {

                double sum = 0;
                int total = 0;

                for(auto el: vec) {
                    sum += el;
                    total++;
                }
                double mean = sum / total;
                cout << "Mean: " << mean;
            } else {
                cout << "list is empty";
            }
        } else if (l == 'S' || l == 's') {

            // smallest

            if(vec.size()) {
                double sm = vec[0];
                for(int i = 0; i < vec.size(); i++) {
                    if(vec[i] < sm) sm = vec[i];
                }
                cout << "Smallest: " << sm;
            } else {
                cout << "List is empty";
            }

        } else if (l == 'L' || l == 'l') {

            // biggest
            if(vec.size()) {
                double bg = vec[0];
                for(int i =0; i < vec.size(); i++) {
                    if(vec[i] > bg) bg = vec[i];
                }
                cout << "Biggest: " << bg;
            } else {
                cout << "List is empty";
            }

        } else if (l == 'D' || l == 'd') {

            // Dash Representation

            int len = vec.size();

            if(len) {
                for(int i = 0; i < len; ++i) {
                    for(int j = 1; j <= vec[i]; j++) {
                        cout << "_ ";
                    }
                    cout << "\n";
                }
            } else {
                cout << "List is empty";
            }

        } else if(l == 'Q' || l == 'q') {
            cout << "Exit...\n";
        } else if (l == 'C' || l == 'c') {
            vec.clear();
            cout << "List has been cleared..";
        } else {
            cout << "Sorry, choose a valid letter\n";
        }


    } while(l != 'q' && l != 'Q');

    /*things to add:
     * change element value
     * */

}