// Write a C++ program to check if a given string is a Palindrome or not.
// A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as madam, racecar.
// Example:
// Sample Input: madam
// Sample Output: True


#include<iostream>
using namespace std;
int main(){
    string s ="madam";
    bool pal = true;
    int i = 0;
    int j = s.length()-1;
 
    while(i<j){
        if(s[i]!=s[j]){
            pal = false;
        }
        i++;
        j--;
    }
    if(pal){
        cout<<"it is palindrome";
    }
    else{
        cout<<"it is not palindrome";
    }
}