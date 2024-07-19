// Write a program in C++ to find the perfect numbers between 1 and 500.
// The perfect numbers between 1 to 500 are:
// 6
// 28
// 496



#include <iostream>
using namespace std;

int main() {
    int n = 500;

    cout << "Perfect numbers between 1 and 500 are:" << endl;

    for (int i = 1; i <= n; i++) {
        int temp = 0;  // Reset temp for each number i

        for (int j = 1; j <= i / 2; j++) {  // Check divisors up to i / 2
            if (i % j == 0) {
                temp += j;  // Sum of proper divisors
            }
        }

        if (temp == i) {
            cout << i << endl;  // Print perfect number
        }
    }

    return 0;
}
