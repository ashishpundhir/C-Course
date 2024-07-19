// library function use 

#include <iostream>
#include<cmath>
using namespace std;

int main() {
 cout<<sqrt(4)<<endl;
  cout<<max(8,9)<<endl;
  cout<<min(10,12)<<endl;
  cout<<cbrt(34)<<endl;
  cout<<pow(8,2)<<endl;
  
}


//permutation and combination by function create
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

int main() {
 cout<<"Enter the value of n ";
  int n;
  cin>>n;
  cout<<"enter the value of r ";
  int r;
  cin>>r;

  int a = factorial(n);
  int b = factorial(r);
  int c = factorial(n-r);



  cout<<"The value of nCr is "<<((a)/(b*c))<<endl;

  
}
