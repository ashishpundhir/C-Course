// Print GP

#include <iostream>
using namespace std;
int main() {
  // print gp
  cout << "enter the count of numbers";
  int value;
  cin >> value;
  cout << "enter the diffrence of gp";
  int number;
  cin >> number;

  for (int i = 1; i <= value; i++) {
    cout << number << " " << endl;
    number = number * 2;
  }
}
