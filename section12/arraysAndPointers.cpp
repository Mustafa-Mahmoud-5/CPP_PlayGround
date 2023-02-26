#include <iostream>
using namespace std;
#define l "\n";

int main() {
	// Array variables are pointers
	// they point to the first element's address
	// deal with it as a pointer, dereferencing it returns the first element, dereferencing in L-value can make changes

	int arr[] = {10,20,30}; // arr is an int pointer to the first element

	int *arr_ptr = arr; // (copying array's pointer[a pointer to its first element])

	cout << arr_ptr << " | " << arr << l;

	*(arr + 1) = 50; // *(arr_address_ptr + 1byte = address of second el) and then derefrencing it giving back the value of what the addressof the second element refers to

	arr_ptr[2] = 80;

	cout << *(arr_ptr + 2) << " | " << arr_ptr[1] << l;
}