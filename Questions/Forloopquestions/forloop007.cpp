#include <iostream>
using namespace std;
int factorial(int a){
    int temp = 1;
    for(int i =1;i<=a;i++){
        temp = (temp*i) ;
    }
    return temp;
}
int main()
{
   cout<<factorial(5);
}