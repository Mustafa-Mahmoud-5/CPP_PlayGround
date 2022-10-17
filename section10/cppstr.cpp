#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    // c++ strings are like vectors, dynamic, have a lot of functions, don't require pre-length


    string name = "Cristiano"; // char name[] = "mustafa";
    cout << name << "\n";
    // ===============================================adding to string=========================================

//    name[7] = '7'; wrong way
    name += '7';
    name += "ronaldo";
    cout << name << "\n";


    string x = {name, 0, 9};
    cout << x << "\n";

    // ============================================================substr(start_index, length)=====================
    cout << x.substr(2,2) << "\n";

    // ===============find(string_you_search_for) // returns index of first letter of the first copy it finds ======
    cout << x.find("i") << "\n";
    cout << x.find("ti") << "\n";
    cout << x.find("re") << "Means not found" << "\n";


    //=========================================erase(start_index, length)===================================

    cout << x.erase(9,1) << "\n";

    // =================================================concat===============================================

    string full_name = name.substr(0,9) + " " + name.substr(10);
    cout << full_name << "\n";

    // string not found

    int idx = x.find('z');
    if (idx == string::npos) cout << "Not found";
    else cout << "Found";

    cout << "\n";

    string nm = "mustafa";

    int in = 21;
    nm += to_string(in);

    cout << nm;

    string my =  nm[0] + to_string(in) + nm[1];
    cout << my;

}