// write a code in which get a unumber as a input and print its reverse and sum of both reverse and actual number 

#include <iostream>
using namespace std;
int main() {
  cout << "enter a number\t";
  int number;
  cin >> number;
  int number2 = number;
  // int sum = 0;
  int counts=0;

  while(number!=0){
    int last_digit = (number%10);
   counts= counts*10;
    counts = counts+last_digit;
    number = (number/10);
    

   
    

    
   
  }
  cout<<counts<<endl;
  cout<<(counts+number2);

}
