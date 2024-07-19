// write a programe in which get a number from user and tell this how many digits are there in the number givin by user


#include <iostream>
using namespace std;
int main() {
 cout<<"enter a number\t";
 int number;
 
 int counts=0;
  cin>>number;
  int number2 = number;
  while(number>0){
   number= (number/10);
    counts++;
  }
  cout<<number2<<" it is a "<<counts<<"  digits number";
}
