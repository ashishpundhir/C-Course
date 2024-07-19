// find the highest factor except itself 

#include <iostream>
using namespace std;
int main() {
  cout<<"enter a number";
  int number;
  cin>>number;
  int value =1;

  for(int i=(number/2);i>=1;i--){
    if(number%i==0){
      value=i;
      cout<<value<<endl;
      break;
    }
    
  }

}


