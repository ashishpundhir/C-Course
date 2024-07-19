

// 2. Write a program in C++ to find the sum of the first 10 natural numbers.
// Sample Output:
// Find the first 10 natural numbers:
// ---------------------------------------
// The natural numbers are:
// 1 2 3 4 5 6 7 8 9 10


#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int temp = 0;
    while(i<=10){
       temp = temp+i; 
       i++;
    }

    cout<<temp;
}









// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int temp = 0;
//     for(;i<=10;i++){
//        temp = temp+i; 
       
//     }

//     cout<<temp;
// }