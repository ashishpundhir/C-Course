// n to 1 print by rucursion

#include <iostream>
using namespace std;


void print(int x){

if(x==0){
  return;
}
  cout<<x<<endl;
  print(x-1);
}
  

using namespace std;
int main() {
  print(5);
  

}


// 1 to n

// #include <iostream>
// using namespace std;

// void print(int x){

// if(x==0){
//   return;
// }
 
//   print(x-1);
//    cout<<x<<endl;
// }

// int main() {
  
//   print(5);
// }





//print the sum of n number

// #include <iostream>
// using namespace std;
// int sum(int x){
//   if(x==1){
//     return 1;
//   }
//   return (x+ sum(x-1));
  
// }

// int main() {

//   int a;
//   cout<<"enter a number";
//   cin>>a;
//   cout<<sum(a);
  
 
// }



//factorial 

// #include <iostream>
// using namespace std;
// int fact(int x){
//   if(x==1 || x==0){
//     return 1;
//   }
//   return (x * fact(x-1));
  
// }

// int main() {

//   int a;
//   cout<<"enter a number";
//   cin>>a;
//   cout<<fact(a);
  
 
// }

















