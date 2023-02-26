#include <iostream>
using namespace std;
#define l "\n";
int main() {
	// L value => Memory Address Location
	// R value => Stored Value(could be int, string, any.)

	int x = 10;
	int *y = &x;
	cout << x << " | " << y << l;

}