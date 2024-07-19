//get a value(intiger) and print its absolute value

#include <iostream>
using namespace std;
int main(){
  int value;
  cout<<"enter any number\n";
  cin>>value;
  if(value<=0){
     cout<<"absolute value is \n";
    cout<< value*(-1);
   

  }
  else{
    cout<<"absolute value is \n";
    cout<<value;
  }

}