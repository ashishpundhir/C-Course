// Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
// Sample Output:
// Input the first number: 25
// Input the second number: 15
// The Greatest Common Divisor is: 5

#include <iostream>
using namespace std;

int greatestCommonDivisor(int a, int b)
{
    int temp = 0;

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            if (temp <= i)
            {
                temp = i;
            }
        }
    }

    return temp;
}

int main()
{
    cout << greatestCommonDivisor(15, 20);
}