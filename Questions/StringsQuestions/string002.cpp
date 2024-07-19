// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
// Example:
// Sample Input: w3resource
// Sample Output: x3sftpvsdf


#include <iostream>
using namespace std;

int main(){
    string change = "w3resource";
    string newLine = change;

    for(int i = 0; i <= ((change.length()-1)); i++){
        if(isdigit(change[i])){
            continue;
        }
        change[i]= char(int(change[i]+1));
    }
    cout<<change<<endl;
    cout<<newLine;
}

