#include <iostream>

using std::cout;
using std::endl;

//This program endeavors to solve project Euler problem 34, which is described as follows:

//Find the sum of all numbers which are equal to the sum of the factorials 
//of their digits.  1! and 2! are not included.

//something to think about.  There is probably a practical limit where the factorials of the digits
//MUST be greater than the original number.  Better find that or look for it as a condition.

int factorial(int num);

int main() {
  cout << factorial(6) << endl;
  cout << factorial(10) << endl;
  cout << factorial(3) << endl;
}

int factorial(int num) {
  //takes a POSITIVE number and returns the factorial of that number.
  if(num <=0) {
    return 0;
  }
  int result = num;
  for(int i = num-1; i>0; --i) {
    result = result * i;
  }
  return result;
}
