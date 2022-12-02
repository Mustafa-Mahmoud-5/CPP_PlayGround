#include <iostream>
using namespace std;
long long factorial(int n) {
    long long f = 1;
    for(n; n>=1; n--) {
        f*= n;
    }
    return  f;
}
void recursion(int n) {
    if(n) {
        cout << n << " ";
        n--;
        recursion(n);
    } else {
        cout << endl;
        return;
    }
}

void rec2(int n) {
    if(n == 6) {
        cout << endl;
        return;
    }
    cout << n << " ";
    n++;
    rec2(n);
}

int recursive_factorial(int n) {
    if(n == 0) return 1;
    return n * recursive_factorial(n-1);
}

int main () {
//     calculate the factorial of n
//     int x; cin >> x;
//     cout << factorial(x) << "\n";
//     recursion(x);
//     rec2(1);

    cout << recursive_factorial(3);
}