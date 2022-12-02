#include <iostream>
using namespace std;
int main () {
//  A-  PRODUCT RULE

    // make all the possibilities to make a three letters word from b and c

    /* B or C --- B or C --- B or C ->> 2 x 2 x 2 = 2^3 = 8 possibilities --> 3d nested loop, 2 iteration each
     * B B B
     * B B C
     * B C B
     * B C C
     * C B B
     * C B C
     * C C B
     * C C C
     * */

    char s[] = "BC";
    char combination[4];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                combination[0] = s[i];
                combination[1] = s[j];
                combination[2] = s[k];
                cout << combination << "\n";
            }
        }
    }
}