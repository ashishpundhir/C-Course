//using nested if else find the greatest number in 3 digits givin by user,

#include <iostream>
using namespace std;
int main() {
  cout << "\nenter number1\n";
  int number1;
  cin >> number1;
  cout << "\nenter number2\n";
  int number2;
  cin >> number2;
  cout << "\nenter number3\n";
  int number3;
  cin >> number3;

  if (number1 > number2) {
    if (number1 > number3) {
      cout << "\nnumber1 is greatest";
    } else {
      cout << "\number3 is greatest";
    }
  }

  else if (number2 > number3) {
    cout << "\number2 is greatest";
  } else {
    cout << "\nnumber3 is greatest";
  }
}
