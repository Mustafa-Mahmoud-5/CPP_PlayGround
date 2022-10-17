#include <iostream>
#include <vector>
using namespace std;
int main() {


    vector<int> histogram;

    int h_size;
    cout << "Enter the items number: ";
    cin >> h_size;

    for(int i = 1; i<= h_size; i++) {
        int item;
        cout << "Enter item(" << i << "): ";
        cin >> item;
        histogram.push_back(item);
    }


    for(int i =0; i < histogram.size(); i++) {
        for(int j = 1; j <= histogram[i]; j++) {
//            cout << (j % 5 == 0 ? "* " : "_ ");

              cout << "_ ";
              if(j % 5 == 0) cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}