//print pascal tringle
//       1 
//      1 1 
//     1 2 1 
//    1 3 3 1 
//   1 4 6 4 1 
//  1 5 10 10 5 1 

#include <iostream>
#include<cmath>

using namespace std;

int factorial(int a){
  int f = 1;
  for(int i=1;i<=a;i++){
    f = (f*i);
  }
  return f;
  
}

int ncr(int x,int y){
  int a = factorial(x);
  int b = factorial(y);
  int c = factorial(x-y);
 return ((a)/(b*c));
  
}

int main() {
 cout<<"Enter the value of n ";
  int n;
  cin>>n;

  for(int i=0;i<=n;i++){
     for(int k=0;k<=(n-i);k++){
       cout<<" ";
     }
    for(int j=0;j<=i;j++){
     
      cout<<ncr(i,j)<<" ";
    }
    cout<<endl;
  }

 
  
}


 