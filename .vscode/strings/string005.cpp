//write a program to make firstl later capital of each word

#include <iostream>

using namespace std;

int main() {
  cout<<"Enter a sentence  ";
  string name;
  getline(cin,name);
  for(int i=0;i<name.length();i++){
    if(name[i] == ' ') {
      
      name[i+1]=toupper(name[i+1]);
    }

    else if(i==0){
      name[i]= toupper(name[i]);
    }
 
  }
  cout<<name;
  
  
  
}








