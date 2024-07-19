// Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
// Example:
// Sample Input: python
// Sample Output: hnopty







//method 1


// #include<iostream>
// using namespace std;
// int main(){
//     string s="python";
//    sort(s.begin(), s.end());

//     cout<<s;}









//method 2

#include <iostream>
using namespace std;
int main()
{
    string s = "python";
    char temp;
    for(int i=0;i<(s.length()-1);i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]>s[j]){
                temp = s[j];
                s[j]=s[i];
                s[i]=temp;
                
            }
        }
    }

    cout << s;
}
