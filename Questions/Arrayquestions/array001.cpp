// Write a C++ program to find the largest element of a given array of integers

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,5,17,9,20};
    int n = 5;
    int temp = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]>=temp){
            temp = arr[i];
        }
    }
    cout<<temp;
}