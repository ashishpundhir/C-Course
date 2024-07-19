// initialization , and change the value by good methid

#include <iostream>
using namespace std;

void change(int brr[]){
  brr[2] =9;
}
int main() {

 int arr[4];
  for(int i=0;i<=3;i++){
    cout<<"enter the value of array index"<<i<<" ";
    cin>>arr[i];
  }
  for(int i=0;i<=3;i++){
    cout<<arr[i]<<" "<<endl;
  }
  cout<<endl;
  change(arr);
  for(int i=0;i<=3;i++){
    cout<<arr[i]<<" ";
  }
  

}








