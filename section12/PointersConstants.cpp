#include <iostream>
#include <vector>
using namespace std;
#define l "\n";

// it creates a refrence to x without copying or making new variable
void pass_by_ref(int &x) {
	x = 15;
}

// it creates a new pointer as a parameter, pass it the address of any int
void pass_with_pointer(int *x_ptr) {
	// again, this is a normal parmaeter of type (int pointer)
	*x_ptr = 20;
}

void alter_vec(vector<int> *v) {
	(*v)[1] = 5555;
}

int main() {
	int x = 10;

	const int *x_ptr = &x; // pointer to constant variable

	int *const x_ptr1 = &x; // constant pointer to a modifiable variable

	const int *const x_ptr2 = &x; // constant pointer to constant variable 

	cout << "=============FUNCTIONS===========\n";

	pass_by_ref(x);

	cout << x << l;

	pass_with_pointer(&x);

	cout << x << l;

	vector<int> v = {10,20,30};
	
	alter_vec(&v);

	for(int el: v) {
		cout << el << " ";
	}

	// Conclusion: a pointer variable can be assigned to an address or a pointer, only....
	int y = 50;
	int *y_ptr = &y;
	int *y_ptr2 = y_ptr;
	cout << endl;
	cout << &y_ptr << " | " << &y_ptr2 << endl;
	cout << y_ptr << " | " << y_ptr2 << endl;
	cout << *y_ptr << " | " << *y_ptr2 << endl;
}


