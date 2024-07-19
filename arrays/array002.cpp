//print all the element sum 

#include <iostream>
using namespace std;

int main() {

 int arr[4];
  for(int i=0;i<=3;i++){
    cout<<"enter the value of array index"<<i<<" ";
    cin>>arr[i];
  }
  int sum = 0;
  for(int i=0;i<=3;i++){
    sum = (sum + arr[i]);
  }
  cout<<sum<<endl;
 
}








