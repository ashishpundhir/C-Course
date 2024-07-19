// get the all three side lenght size of triangle and check they are the side of triangle or not.
#include <iostream>
using namespace std;
int main() {
  cout << "\nenter side1\n" ;int side1;
  cin >> side1;
  cout << "\nenter side2\n" ;int side2;
  cin >> side2;
  cout << "\nenter side3\n" ;int side3;
  cin >> side3;

  if ((side1 + side2) > side3 && (side2 + side3)>side1 && (side3+side1)>side2) {
      cout << "\nthese are the side of triangle";
    }

  else {
    cout << "\nthese are not the side of triangle";
  }
}