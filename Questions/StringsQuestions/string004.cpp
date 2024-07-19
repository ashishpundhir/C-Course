

#include <iostream>
using namespace std;

int main() {
    string change = "C++ is a general-purpose programming language.";
    int maxLength = 0;
    string longestWord;
    int wordStart = 0;
    int length = change.length();

    for (int i = 0; i <= length; ++i) {
        if (i == length || change[i] == ' ' || change[i] == '-') {
            int wordLength = i - wordStart;
            if (wordLength > maxLength) {
                maxLength = wordLength;
                longestWord = change.substr(wordStart, wordLength);
            }
            wordStart = i + 1;
        }
    }

    cout << "The longest word is: " << longestWord << endl;

    return 0;
}





