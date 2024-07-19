// Write a C++ program to check whether the characters e and g are separated by exactly 2 places anywhere in a given string at least once.
// + Example:
// Sample Input: eagerer
// Sample Output: eagerer -> 1

#include <iostream>
using namespace std;

int main() {
    string s = "aesgpesgjjesg";
    int count = 0;

    // Loop through the string to find 'e' and 'g' pairs
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i] == 'e') {
            for (int j = i + 1; j < s.length(); ++j) {
                if (s[j] == 'g' && j - i == 2) {
                    count++;
                }
            }
        }
    }

    cout << s << " -> " << count << endl;

    return 0;
}

