// upper all the even number alphabets

#include <iostream>

using namespace std;

int main() {
  cout<<"Enter a sentence  ";
  string name;
  getline(cin,name);
  for(int i=0;i<name.length();i++){
    
    if(i%2==0){
      name[i]=toupper(name[i]);
    }
 
  }
  cout<<name;
  
  
  
}








