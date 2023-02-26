#include <iostream>
using namespace std;
#define l "\n";

int main() {
	int *int_ptr = nullptr;

	int_ptr = new int; // link new int in the heap to int_ptr [as int_ptr = &variable] 

	cout << *int_ptr << " | " << int_ptr << l; 

	*int_ptr = 10;

	cout << *int_ptr << " | " << int_ptr << l; 

	delete int_ptr; // clearing the space of int in the heap, but the link is still available

	cout << *int_ptr << " | " << int_ptr << l; 
}