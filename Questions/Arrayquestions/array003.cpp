// 3. Write a C++ program to find the second largest element in an array of integers

#include<iostream>
using namespace std;
int main(){
    int arr[7] = {23,45,67,89,24,12,14};
    int largest1=INT_MIN;
    int largest2=INT_MIN;

    for(int i =0;i<7;i++){
        if(arr[i]>largest1){
            largest2=largest1;
            largest1=arr[i];

        }

        else if(arr[i]>largest2){
            largest2=arr[i];
        }
    }
    
    

     cout<<"2nd largest number is  : "<<largest2<<endl;

}