#include <iostream>

using std::cout;
using std::endl;

//No longer does this say "Hello" to the world.  This program will now solve the first
//Project Euler problem!  For reference, the task is rewritten here:
//  Find the sum of all the multiples of 3 or 5 below 1000.

int main() {
  int sum = 0;
  for(int i = 0; i<1000; ++i) {
    if(i % 5 == 0 || i % 3 == 0) {
      sum += i;
    }
  }
  cout << "The sum of the first 1000 integers is::" << sum << endl;
}
