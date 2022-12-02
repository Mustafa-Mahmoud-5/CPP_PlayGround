#include <iostream>
using namespace std;

int fibonacci(int n) {
    // Fibonacci f(n) = f(n-1) + f(n-2)
    /*
     * 0 1 2 3 4 5 6 7  8  9  10
     * 0 1 1 2 3 5 8 13 21 34 55
     * */
    if(n==0 || n == 1) return n;
    int f1 = 0;
    int f2 = 1;
    int f;
    for(int i = 2; i<=n; i++) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }
    return f;
}

int fib(int n) {
    if(n == 0 || n==1) return n;
    return fib(n-1) + fib(n-2);
}

double penny(int n) {
    // calc the value of the penny, it starts at day 1 with 0.01 and gets
    // multiplied by 2 everyday
    double p = 0.01;
    for(int i = 2; i <= n; i++) {
        p *= 2;
    }
    return p;
    // from that we conclude value of day n = 2 * value of day n-1
    // and value of n-1 was 2 * value of n-3 .. so on until day 1
    // .*. the recursion formula will be: return 2 * func(n-1)
}

double recursive_penny(int n) {
    if(n == 1) return 0.01;
    return 2 * recursive_penny(--n);
}

int main () {
    int x; cin >> x;
//    cout << fibonacci(x);
    cout << recursive_penny(x);
}

