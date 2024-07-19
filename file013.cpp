// print AP by for loop

#include <iostream>
using namespace std;
int main() {
  // print AP
  cout << "enter the count of numbers";
  int value;
  cin >> value;

  for (int i = 4; i <= (3 * value + 1); i += 3) {
    cout << i << " " << endl;
  }
}




//formula of AP is {nth = a+(n-1)d}