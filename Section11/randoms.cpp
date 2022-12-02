#include <iostream>
#include <ctime> // time()
#include <cstdlib> // srand, rand
using namespace std;
int main () {
    // Generate random number from 2 to 10
    // the idea here is that rand gives rand value from 0 up to 32767
    // whatever number we get, if we divide it by x, the remainder would be from 0 to x - 1 (math proved)
    // 32 / 5 means how many fives in 32, it gives 6.whatever, random is 2.
    // apply any number / 5, the remainder range will be from 0 to 4, because it means we couldn't make another cycle to form up another five
    // that's why remainder can't be five, it means we made another cycle, giving result++ and remainder = 0
    // we add n to start from the minimum we want cuz it starts from 0
    // 0 + n = n; add n to zero it refers to the point you wish to start from
    int x = 10;
    while(x--) {
        cout << (rand() % 11) + 2 << " ";
    }

    cout << "\n=========\n";
    x = 10;
    // Seed it to get diff sequence of results
    srand(time(nullptr));
    while(x--) {
        cout << (rand() % 11) + 2 << " ";
    }

}