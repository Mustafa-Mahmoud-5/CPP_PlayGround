#include <iostream>
#include <string>
using namespace std;
int main() {
    string alphabet = "abcdefghiklmnopqrstvxyzABCDEFGHIKLMNOPQRSTVXYZ";
    string key =      "1QAZqaz2WSXwsx3EDCedc4RFVrfv5TGBtgb6YHNyhn7UJM";


    string str;
    cout << "Enter you secret string: ";
    getline(cin, str);

    string coded = str;
    for(int i = 0; i < coded.length(); i++) {
        int c = alphabet.find(coded[i]);
        if(c != string::npos) {
            coded[i] = key[c];
        }
    }

    cout << "ENCODED:" << coded << "\n";

    // decode
    string decoded = coded;
    for(int i = 0; i < decoded.length(); i++) {
        for(int j = 0; j < key.length(); j++) {
            if(decoded[i] == key[j]) {
                decoded[i] = alphabet[j];
                break;
            }
        }
    }

    cout << "DECODED:" << decoded;
    return 0;
}