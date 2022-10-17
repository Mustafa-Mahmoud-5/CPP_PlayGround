#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype> // for character functions

using namespace std;
int main () {
//    this explanation is super simple

    // first way
    char st[] = "Mustafa"; // [M][u][s][t][a][f][a][\0] // 8
    cout << st;
    cout << strlen(st) << "\n";


    // second way
    char st2[10] = ""; // [\0][\0][\0][\0][\0][\0][\0][\0][\0][\0] // 10
    strcpy(st2, "Mustafa");
    cout << st2 << strlen(st2) << "\n";

    char st3[10]; // compiler is not sure if that is array or string
    strcpy(st3, "Mustafa"); // [M][u][s][t][a][f][a][\0][\0][\0]
    cout << st3 << strlen(st3) << "\n";



    // Error case
    char st_error[10]; // size: 10
//    strcopy(st_error, "1234567890"); >> can't put 10 elements in a size of 10, the last one is reserved for null char
    return 0;
}