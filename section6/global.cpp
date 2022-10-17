#include <iostream>
using namespace std;

int age = 19;

int main() {
  int age = 20;
  cout << age; // output 20. The compiler looks for the scoped variables first
  return 0;
}
