#include <iostream>
using namespace std;

int main() {
  // in this example, entering in the console 10.5 
  // first cin will  open up the input stream and then a buffer is created, 10.5 is stored, now that num1 is expected to be int, cin will take only 10. extracted to num1.. but now another cin here, it opens up the input stream, it realizes it has a buffer already of 0.5 remaining the second cin will take it and extract them to num2 since it is a double already without giving the cursor to the user for the second cin
  int num1;
  double num2;
  cin >> num1;
  cin >> num2;
  cout << num1 <<  ' ' << num2;
  return 0;
}