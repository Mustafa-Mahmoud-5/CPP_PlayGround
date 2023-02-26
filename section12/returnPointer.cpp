#include <iostream>
using namespace std;
#define l "\n";

int *build_array(size_t arr_size, int def_val) {
	int *arr_ptr = new int[arr_size];

	// loop to check how it looks

	for(int i = 0; i < arr_size; ++i) {
		*(arr_ptr + i) = def_val;
	}
	cout << endl;
	return arr_ptr; // a pointer to the first array's element
}


void print_array(int *arr_ptr, int size) {
	cout << endl;
	for(int i = 0; i < size; ++i) {
		// cout << *(arr_ptr + i) << " ";
		cout << arr_ptr[i] << " ";
	}
	cout << endl;
}


int main() {
	int arr_size = 10;
	int *arr_ptr = build_array(arr_size, 4);
	*(arr_ptr + 5) = 20;
	cout << arr_ptr[5];
	print_array(arr_ptr, arr_size);
	delete [] arr_ptr;
}