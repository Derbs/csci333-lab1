#include <iostream>
#include <vector>

using std::cout;
using std::endl;

//This program endeavors to solve project Euler problem 34, which is described as follows:

//Find the sum of all numbers which are equal to the sum of the factorials 
//of their digits.  1! and 2! are not included.

//something to think about.  There is probably a practical limit where the factorials of the digits
//MUST be greater than the original number.  Better find that or look for it as a condition.

int factorial(int num);
//vector<int> parseDigits(int num);

int main() {
  cout << factorial(9)<<endl;
  int i = 3;
  bool foundResult = false;
  while(!foundResult) {
    int holder = i;
    int sum = 0;
    while(holder!=0) {
      int digit = holder%10;
      sum = sum + factorial(digit);
      holder = holder/10;
    }
    if(sum==i) {
      cout << sum << " " << i << endl;
    }
    i++; 
  }
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

/*vector<int> parseDigits(int num) {
  //takes a number and returns a vector of its digits.  Very possible to solve the problem without
  //this, but its a useful way to break up this problem even further (and give me vector practice)
  vector<int> v = new vector<int>;
  return v;
}*/
