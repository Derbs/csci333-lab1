#include <iostream>

using std::cout;
using std::endl;

int Euler5(int n);

int main() {
  cout<<Euler5(100)<<endl;
  return 0;
}

int Euler5(int n) {
  int sumSquares = 0;
  int squareSums = 0;
  for(int i = 1; i<=n; i++) {
    sumSquares = sumSquares + (i*i);
    squareSums = squareSums + i;
  }
  squareSums = squareSums*squareSums;
  int result = squareSums - sumSquares;
  return result;
}
