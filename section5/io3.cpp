#include <iostream>
using namespace std;
// in this example i will explain how the input stream works
int main()
{
  int num1;
  int num2;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  cout << "you've entered " << num1 << " and " << num2;
  return 0;
}