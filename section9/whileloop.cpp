#include <iostream>
#include <vector>
using namespace std;
int main() {
   // while loop depends on a condition for the most part, you can also use it if you need to loop up till sepcific number
   // the condition is checked before getting into the body just like the for loop
   // use while and not for-loop if you don't depend on a specific number of iterations but a condition


   // PROBLEM: given a vector that has vowels, if you found at least 3, it's enough
   vector<char> vowels =  {'a','b', 'e', 'u','o', 'i',};
   int v = 0;
   int i = 0;
   while(i < vowels.size() && v < 3) {
       if(vowels[i] == 'a' || vowels[i] == 'e' || vowels[i] == 'o' || vowels[i] == 'u' || vowels[i] == 'i') {
           v++;
       }
       i++;
   }
   cout << v << "\n";


   // same logic can be done using for loop

   int v2 = 0;
   for(int i = 0; i < vowels.size(); i++) {
       if(vowels[i] == 'a' || vowels[i] == 'e' || vowels[i] == 'o' || vowels[i] == 'u' || vowels[i] == 'i') {
           v2++;
       }

       if(v2 == 3) break;
   }
   cout << v2 << "\n";

   cout << "=====================" << "\n";

/*
// WHILE TRUE METHOD
   int num;
   while(true) {
       cout << "Enter number less than 100" << "\n";
       cin >> num;
       if(num < 100) {
           break;
       }
   }
*/


/*
// the bool method
   int num;
   bool between = false;
   while(!between) {
       cout << "Enter number between 5 and 10" << "\n";
       cin >> num;
       if(num > 5 && num < 10) {
           between = true;
       }
   }
*/


/*
// get in loop method
   int num;
   cout << "Enter num between 5 and 10" << "\n";
   cin >> num;
   while(num >= 10 || num <= 5) {
       cout << "Enter num between 5 and 10" << "\n";
       cin >> num;
   }
*/


   // count up
   int end;
   cin >> end;
   int c = 1;
   while(c<=end) {
       cout << c << " ";
       c++;
   }

   cout << "\n===========\n";

   // write a number less than a hundred

   bool less_than_hundred = false;
   int number;
   while(!less_than_hundred) {
       cout << "enter a number less than a hundred: ";
       cin >> number;
       if(number < 100) less_than_hundred = true;
   }

   return 0;
}