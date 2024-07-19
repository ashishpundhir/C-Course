// print prime numbers in for loops


#include <iostream>
using namespace std;
int main() {
  int value;
  cout << "enter the no. line" << endl;
  cin >> value;

  for (int i = 1; i <= value; i++) {
    if (i % 2 == 0) {
      cout << i << " ";
    }
  }
}


// #include <iostream>
// using namespace std;
// int main() {
//   int value;
//   cout << "enter the no. line" << endl;
//   cin >> value;

//   for (int i = 2; i <= value; i=i+1) {
//     cout << i << " ";
//   }
// }
