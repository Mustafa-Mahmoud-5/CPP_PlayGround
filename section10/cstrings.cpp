#include <iostream>
using namespace std;
int main() {
    // this is a theory-heavy file.


    char name[] = "Mustafa";
    cout << name << "\n";
    // MEMORY ['M']['u']['s']['t']['a']['f']['a'][\0]
    // the compiler figures out this is string, allocate length + 1 in memory for it
    // this extra space for the null character which is responsible for the end of the string
    // if you add extra char at the end, it will take the null char place, don't do that
    // array size is fixed, so will be the string, we can't add to it
    // if you want a string that you keep adding to it, then like arrays, initialize it with big enough size

    char big_name[10] = ""; // string => size = 10 (in fact this will make all as \0 at first)
    cout << big_name[0] << "\n";
    big_name[0] = 'V';
    big_name[1] = 'i';
    big_name[2] = 'p';
    cout << big_name << "\n";
    // Memory ['V']['i']['p'][\0][\0][\0][\0][\0][\0][\0] // 10 blocks reserved, len = 3
    // never change the last element size + 1 , it's for the null terminator


//    char my_name[8] = ""; // can't assign strings this way (ERROR)
//    my_name = "Mustafa"; // strings, arrays variables refer to their memory location. it's like saying 23 = 52


    // char array_or_string[20]; // can be dealt with as both arr of chars and string
    // problem is that the compiler knows not if that is string or array, so it doesn't put the terminator char to it
    return 0;
}