// Write a program in C++ to find the sum of the digits of a given number.
// Sample Output:
// Input a number: 1234
// The sum of digits of 1234 is: 10



#include <iostream>
using namespace std;

int sumOfAllDigit(int a)
{
    int num = 0;
    int temp = 0;
    int sum = 0;

    for(int i =a; i>=0;i--){
        {num = (a%10);
        temp = (a/10);
        a = temp;
        sum = sum + num;}
        
       

    }
    
   


    return sum;
}

int main()
{
    cout << sumOfAllDigit(42345);
}