//logical and operator , enter a number and find out is it a 3 digit number or not 

#include <iostream>
using namespace std;
int main() {
  int number1;

  cout << "enter number 1\t";
  cin >> number1;

  if (number1 > 99 and number1 < 1000) {
    cout << number1;
    cout << "\t\tit is 3 digit number";
  }

  else {
    cout << number1 << "\t\t it not a 3 digit number";
  }
}