#include <iostream>
using namespace std;
#define l "\n";

void display_array(int *arr_ptr, int size) {
	cout << "[ ";
	for(int i = 0; i < size; ++i) {
		cout << *(arr_ptr + i) << " ";
	}
	cout << " ]" << endl;
}

int *create_arr(int *arr1_ptr, int arr1_size, int *arr2_ptr, int arr2_size) {
	// allocate new cross multiplication array on heap, create it, return it
	int size = arr1_size * arr2_size;
	int *cross_multiplication_array = new int[size];
	int idx = 0;
	for(int i = 0; i < arr1_size; i++) {
		for(int j = 0; j < arr2_size; j++) {
			int product = arr1_ptr[i] * arr2_ptr[j];
			*(cross_multiplication_array + idx) = product;
			idx++;
		}
	}
	return cross_multiplication_array;
}


int main() {
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {10, 20, 30};

	display_array(arr1, 5);
	display_array(arr2, 3);
	
	int *created_arr = create_arr(arr1, 5, arr2, 3);
	display_array(created_arr, 15);
	delete [] created_arr;
	cout << created_arr << " " << *created_arr << " " << created_arr[0];
}