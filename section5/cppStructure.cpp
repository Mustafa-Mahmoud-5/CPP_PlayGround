#include <iostream> // preprocessor directive #include for importing files
using namespace std; // another directive, the standard c++ namespace "std" that has the standard funcs
/*
Sometimes because using the using namespace directive will require all the names(functions) inside that namespace, using specific names inside specific namse space would be a better option as below:
using std::cout;
using std::cin;
using std::endl;
using std::string;
*/

int main () {
  string name;
  cout << "What's your name sir ?\n"; // insertion (a variable to output)
  cin >> name; // exctraction (from console to variable)
  cout << "Hello" << " " << name << " " << "its nice to have you.";
  return 0;
}
