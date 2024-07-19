// 5. Write a program in C++ to check whether a number is prime or not.
// Sample Output:
// Input a number to check prime or not: 13
// The entered number is a prime number.

#include<iostream>
using namespace std;
 int evenOdd(int a){
    if(a%2==0){
        cout<<"it is even \t";
    }

    else{
        cout<<"it is odd\t";
    }

  return 0;
 }


int main(){
    cout<<"enter the number to check even/odd  \t";
    int num;
    cin>>num;
    evenOdd(num);
    

}