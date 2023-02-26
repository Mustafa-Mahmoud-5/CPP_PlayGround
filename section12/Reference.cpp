#include <iostream>
#include <vector>
using namespace std;
#define l "\n";
int main() {
	// REFERENCE or Alias is a pointer that is automatically dereferenced on use.

	vector<int> v= {5, 10, 15, 20};
	
	for(int &el: v){
		// el is alias to each vec element, it makes effect on it
		el = 9;
	}


	for(int &el: v) {
		// using alias instead of copying each vector element into "el" in each loop
		cout << el << endl;
	}

	int x = 10;
	int &x_ref = x;
	x_ref = 50;
	cout << x_ref << " " << x;
}
