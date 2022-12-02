/*
* in arrays, the variable holds the arr first element memory location
* so when we say arr1 = arr2, we are not copying the arr2 to arr1,
* but we are setting arr1 to arr2 first element memory location
* in function parameters, we usually pass by copy, but with arrays, it is just reference
* that means any update to the array inside the function will reflect outside
* we also gotta pass the size of the array, in c++, arrays don't have len method
*/
#include <iostream>
using namespace std;

// void print_arr(const int arr[], int size) // to prevent changes in arr
void print_arr(int arr[], int size) {
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


void set_arr(int arr[], int size, int set_to = 0) {
    for(int i = 0; i < size; ++i) {
        arr[i] = set_to;
    }
 }

int main() {
    int arr[] = {1, 2, 3, 4};
    print_arr(arr, 4);// pass the reference or the memory location of arr first el
    set_arr(arr, 4 ,5); // since it has the ref, changes reflect on arr
    print_arr(arr, 4); // changes made, it was the same reference passed
    set_arr(arr, 4);
    print_arr(arr, 4);
}

