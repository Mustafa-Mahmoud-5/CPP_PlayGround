#include <iostream>
using namespace std;

int main() {
  cout << "Enter the room length and width: " << endl;
  int l, w;
  cin >> l >> w;
  int room_area = l * w;
  cout << "Area: " << room_area;
  return 0;
}
