//maximum value of arraay 

#include <iostream>
#include<cmath>
using namespace std;

int main() {

int arr[7] = {3,6,7,8,7,12,5};

  int bign = 0;
  for(int i=0;i<=6;i++){
    bign = max(bign,arr[i]);
  
  }
  cout<<bign<<endl;
 
}








