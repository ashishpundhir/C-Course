// Write a C++ program to count all the words in a given string.
// Example:
// Sample Input: Python
// Sample Output: number of words -> 1


#include<iostream>
using namespace std;
int main(){
    string s = "Python is a good leangu";
    int count = 0;
    for(int i = 0; i<=(s.length()-1);i++){
        if(s[i]==' ' || s[i]=='\0'){
            count++;
        }
    }
    cout<<count;
}