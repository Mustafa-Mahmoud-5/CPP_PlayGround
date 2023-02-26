#include <iostream>
#include <string>
using namespace std;
#include <vector>
#define l "\n";

int main() {
	// *Pointer is used to declare pointer
	// *Pointer is also used to dereference the pointer's
	// Derefrencing means using the variable the pointer is pointing to
	// when we derefrence the pointer, think of it as if we have the variable itself
	// means that using its R-value will give the stored value
	// and using its L-value will mean we are changing the variable
	
	string name = "Mustafa";

	string *name_ptr = &name;

	cout << *name_ptr << " | " << name_ptr << l;
	
	name = "Ahmed";

	cout << *name_ptr << " | " << name_ptr << l;

	*name_ptr = "Mustafa Mahmoud";

	cout << *name_ptr << " | " << name_ptr << l;


	cout << "==================\n";

	vector<int> vec = {1, 2, 3};

	vector<int> *vec_ptr = &vec;

	for(int el: *vec_ptr) {
		cout << el << l;
	}

	(*vec_ptr)[0] = 5;

	cout << vec[0];

	cout << "==================\n";
	int x  = 10;
	int *x_ptr = &x;
	int y = *x_ptr;
	cout << y; // 10
}