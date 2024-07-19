//write a program by recursive function and get two value from user first one is the starting number and second one is the last number and print the value of between them 

#include <iostream>
using namespace std;

void print(int x, int y){
  if(x>y){
    return;
  }
  cout<<x<<" "<<endl;
  print(x+1,y);
}

int main() {
  
cout<<"enter the start number ";
int a;
  cin>>a;
  int b;
  cout<<"enter the last digit ";
  cin>>b;
print(a,b);
}