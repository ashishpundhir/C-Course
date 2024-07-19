//using OR(||) operator, check the number is it divible by 3 or 5 or not.


#include <iostream>
using namespace std;
int main() {
  int number1;

  cout << "enter number 1\t";
  cin >> number1;

  if (number1 % 3 == 0 || number1 % 5 == 0) {
    cout << number1;
    cout << "\t\tit is divisible by  3 or 5 ";
  }

  else {
    cout << number1 << "\t\t it not a divisible by  3 or 5 ";
  }
}