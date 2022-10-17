#include <iostream>
#include <vector>
using namespace std;
int main() {
    // we use the range-based iterator to loop over collection data types like arr,vectors,strings
    // directly without the need of its length or accessing the collection elements or bounds check

    // for(collection's item data_type: collection_name){}
    int arr[] = {'a', 'b', 'c','z'};
    for(char letter: arr) {
        cout << letter << "\n";
    }
    cout << "========" << "\n";

    // auto if we don't know the collection data type, the compiler will figure it out

    double arr2[3] = {1,2,3};
    for(auto val: arr2) {
        cout << val << "\n";
    }
    cout << "========" << "\n";

    vector<double> temps = {87.2, 77.1, 80.0, 72.5};
    double sum = 0;
    int total = 0;

    for(auto temp: temps) {
        sum+=temp;
        total++;
    }
    double avg = sum / sum;
    cout << "AVG: " << avg << "\n";

    cout << "========" << "\n";

    int ascii_sum = 0;
    for(auto c: "mustafa") {
        ascii_sum += static_cast<int>(c);
    }
    cout << "ASCII_SUM: " << ascii_sum << "\n";

    cout << "========" << "\n";

    for(auto val: {1,2,3}) { // {} is an array, equivalent to >> int arr[] = {1,2,3}
        cout << val << " ";
    }
//    char a = 'A';
//    int letter_code = a;
//    cout << a << " : " << letter_code;
    return 0;
}