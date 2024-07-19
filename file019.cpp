//write a code and get the value from user print the star rectange

#include <iostream>
using namespace std;
int main() {
  cout<<"enter number of  coloum";
  int coloum;
cin>>coloum;
  cout<<"enter number of  Row";
  int row;
  cin>>row;

  for(int i = 1; i<=coloum;i++){
    for(int j =1;j<=row;j++){
      cout<<"*";
     
    }
     cout<<endl;
  }
}


// print a 1234

#include <iostream>
using namespace std;
int main() {
  cout<<"enter number of  coloum";
  int coloum;
cin>>coloum;
  cout<<"enter number of  Row";
  int row;
  cin>>row;

  for(int i = 1; i<=coloum;i++){
    for(int j =1;j<=row;j++){
      cout<<j;
     
    }
     cout<<endl;
  }
}
//floyds triangle
// 1
// 23
// 456
// 78910


#include <iostream>
using namespace std;
int main() {
  cout<<"enter the value of n  ";
  int n;
  int a=1;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<a<<" ";
      a = a+1;
    }
    cout<<endl;
  }
}

// print enter the value of n  
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
0 1 0 1 0 1 
1 0 1 0 1 0 1 
0 1 0 1 0 1 0 1 




#include <iostream>
using namespace std;
int main() {
  cout<<"enter the value of n  ";
  int n;
  // int a=1;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      if(((i+j)%2==0)){
        cout<<"1"<<" ";
      }
     else{cout<<"0"<<" ";}
     
    }
    cout<<endl;
  }
}

//enter the value of n  7
//    *   
//    *   
//    *   
// *******
//    *   
//    *   
//    *  

#include <iostream>
using namespace std;
int main() {
  cout<<"enter the value of n  ";
  int n;
  // int a=1;
  cin>>n;
  int k = ((n/2)+1);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i==k || j==k){
        cout<<"*";
      }
      else{cout<<" ";}
     
    }
    cout<<endl;
  }
}
