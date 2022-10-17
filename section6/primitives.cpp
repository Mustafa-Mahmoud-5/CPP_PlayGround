#include <iostream>
using namespace std;

int main() {
  short int x = 32767; // short has 16 bits, means 2^16 = 65536 possibilities, divided into two, means it has 32768 in the positive side which is the max val, and same in negative side. so 32767 is the last number short can hold, more than that would caause overflow 
  cout << x << endl;
  
  int y = 500000000;
  cout << y << endl;

  long long z = 454656546465465;
  cout << z << endl;
  
  unsigned long int sun_earth_distance = 151000000;
  cout << sun_earth_distance << endl;

  unsigned int negative = -5; // unsigned keywords means it accepts 0, Z+ numbers only AKA non negatives
  cout << "UNSIGNED: " << negative << endl;

  bool game_over = 5; // returns 1
  bool game_over2 = 0; // returns 0
  bool game_over3 = true; // returns 1
  
  cout << game_over << endl << game_over2 << endl << game_over3 << endl;

  char letter = 'M'; // use single quotes with char, double quotes with strings
  cout << letter << endl;

  long long people_on_earth = 7'000'000'000; // we can use ' to separate large number
  cout << people_on_earth << endl;

  float free_space_permuability = 1.256e-6; // float is same as double but has low bit capacity allocated to it
  cout << free_space_permuability << endl;

  double dbl_num =  2.7e120;
  cout << dbl_num << endl;

  long double large_double = 0.5e300;
  cout << large_double << endl;

  return 0;
}