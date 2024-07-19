// Write a C++ program to reverse a given string.
// Example:
// Sample Input: w3resource
// Sample Output: ecruoser3w


// #method 1

// #include <iostream>
// using namespace std;
// int main(){
//     string round = "w3resource";
//     reverse(round.begin(), round.end());
//     cout<<round;
// }



// method 2

#include <iostream>
using namespace std;
 int main(){
    string round = "w3resource";
    string round2;
    for(int i=((round.length())-1); i >=0 ; i--){
        round2 = round2 + round[i];
    }
    cout<<round2;

 }


