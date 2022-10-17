#include <iostream>
using namespace std;

int main () {
    double base_cost = 2.50;
    int l,w,h;
    const int max_dimension = 10;

    cout << "ENTER LENGTH, WIDTH, HEIGHT: " << endl;
    cin >> l >> w >> h;


    if(l <= 10 && w <= 10 && h <= 10) {
        int volume = l * w * h;
        cout << volume << endl;
        if(volume > 500) {
            double surcharge = 10/100.0;
            base_cost += (base_cost*surcharge);
        } else if(volume > 100) {
            double surcharge = 25/100.0;
            base_cost += (base_cost * surcharge);
        }
        cout << "COST: " << base_cost << endl;
    } else {
        cout << "Each dimension must be less than 10" << endl;
    }

    return 0;
}