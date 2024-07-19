//Recusion 

#include <iostream>

void swap(int* a, int* b){
  int temp = *a;
  *a=*b;
  *b= temp;
  
}
using namespace std;
int main() {

int x=15, y=17;
  cout<<x<<" "<<y<<endl;
  swap(x,y);
  cout<<x<<" "<<y<<endl;
  
  
// int x =5;
//   int* ptr = &x;
//   cout<<x<<endl;
//   cout<<*ptr<<endl;
//   cout<<ptr<<endl;
//   cout<<&*ptr<<endl;
//   cout<<&x<<endl;
//   cout<<&ptr<<endl;
}