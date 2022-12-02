#include <iostream>
using namespace std;
int main () {
    // Given a/c,  remainder = a - ( (a/c) * c ) >> arithmetic equation
    cout << "Enter Number: ";
    int a; cin >> a;

    cout << "Enter cycle: ";
    int cycle; cin >> cycle;


    int r = a%cycle;
    cout << (a > 0 ? r: r+cycle);

    cout << "\n=============\n";

    for(int i = 1; i <= cycle; ++i) {
        if(i == r || i == r + cycle) cout << '(' << i << ')';
        else cout << i;
        cout << " ";
    }



    cout << "\n=============================\n";
    cout << "Check Odd: ";
    int x; cin >>x;
    if(x % 2 == 1 || x % 2 == -1) cout << "ODD"; else cout << "EVEN";
}
