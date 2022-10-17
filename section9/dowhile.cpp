#include <iostream>
using namespace std;

int main () {
    // do-while loop makes it possible to execute one iteration of the logic you need to put in a loop at least once
    // this mechanism is commonly used with prompting user, enforcing him to enter exact data you want
    // the choice between while and do while isn't clear for most cases, but if you think your logic need at least one iteration before deciding you should continue looping, then do while is a better choice instead of enforcing getting into while loop  and then check to exit, writing duplicated code outside, making the bool trick



    // enter number greater than 100 using both while and do while

/*
    // while (you have to get initial value first, making it possible for duplicating same code)
    int x;
    cin >>
    cout << "Enter a number > 100: ";
    while(true) {
        cout << "Enter a number > 100: ";
        cin >> x;
    }
*/

/*
    //do-while
    int y;
    do {
        cout << "Enter a number > 100: ";
        cin >> y;
    } while (y <=100);
*/


    return 0;
}

