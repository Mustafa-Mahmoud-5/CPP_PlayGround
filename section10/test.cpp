#include <iostream>
#include <string>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        string word;
        cin >> word;

        int len = word.length();

        if(len > 10) {
            // shrink ==> "start + len+ end
            word = word[0] + to_string(len - 2) + word[len - 1];
        }

        cout << word << "\n";
    }
}
