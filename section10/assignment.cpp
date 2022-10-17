#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    int len = str.length();
    for(int i = 0; i < len; i++) {
        string line = "";

        // left spaces
        int spaces = len - (i + 1);
        for(int s = 1; s <= spaces; s++) line += " ";

        // go to substring end
        for(int j = 0; j <= i; j++) {
            line += str[j];
        }

        // back to zero
        if(i>0) {
            for(int k = i - 1; k >= 0; k--) {
                line += str[k];
            }
        }
        cout << line << "\n";
    }

    return 0;
}