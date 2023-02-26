#include <iostream>
using namespace std;
#define l "\n";
int main () {
	int arr[] = {5,10,15, 0};
	int *arr_ptr = arr;
	// *(arr_ptr+1) same as (address + (1 * 4))
	arr_ptr++;

	cout << *arr_ptr << l;
	cout << "==========\n";

	int *arr_ptr2 = arr;

	while(*arr_ptr2 != 0) {
		cout << *arr_ptr2 << l;
		arr_ptr2++;
	}
}