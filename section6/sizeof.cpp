#include <iostream>
#include <climits> // for using sizeof with ints, char
#include <cfloat> // for using sizeof with float, double
using namespace std;

int main() {
  // sizeof returns the number of bytes allocated with each data type in the current machine as it varies from a machine to other
  cout << "short: " << sizeof(short) << " Bytes." << endl;
  cout << "int: " << sizeof(int) << " Bytes." << endl;
  cout << "long: " << sizeof(long) << " Bytes." << endl;
  cout << "long long: " << sizeof(long long) << " Bytes." << endl;
  cout << "float: " << sizeof(float) << " Bytes." << endl;
  cout << "double: " << sizeof(double) << " Bytes." << endl;
  cout << "long double: " << sizeof(long double) << " Bytes." << endl;
  cout << "char: " << sizeof(char) << " Bytes." << endl;
  cout << "================================================================" << endl;
  cout << "CHAR_MAX: " << CHAR_MAX << endl;
  cout << "SHRT_MAX: " << SHRT_MAX << endl;
  cout << "INT_MAX: " << INTMAX_MAX << endl;
  cout << "FLT_MAX: " << FLT_MAX << endl;
  cout << "DBL_MAX: " << DBL_MAX << endl;
  return 0;
}