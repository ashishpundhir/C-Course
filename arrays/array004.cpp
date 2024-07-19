//reverse the array by not using anothe array

#include <iostream>
#include<cmath>
using namespace std;

int main() {

  int arr[5] = {1,2,3,4,5};
  int n = 5;
  int i = 0;
  int j = n-1;
  while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
  }

  for(int i=0; i<=4; i++){
    cout<<arr[i];
  }
}








