// Write a C++ program to count all the vowels in a given string.
// Example:
// Sample Input: eagerer
// Sample output: number of vowels -> 4



#include<iostream>
using namespace std;
int main(){
    string s ="eagererrhtjahryerhyddhsjdh";
    string v ="aeiouAEIOU";
    int count =0 ;
    for(int i =0 ; i<=(s.length()-1);i++){
       for(int j=0;j<=(v.length()-1);j++){
        if(s[i]== v[j]){
            count++;
        }
       }

    }
    cout<<count<<endl;
}