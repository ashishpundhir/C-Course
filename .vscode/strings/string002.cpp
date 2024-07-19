// find the vowels in the strings 

#include <iostream>

using namespace std;

int main() {
  cout<<"Enter a sentence  ";
  string name;
  getline(cin,name);
  int count = 0;
  for(int i=0;i<name.length();i++){
    
    if(name[i] == 'a'|| name[i] == 'e'|| name[i] == 'i'|| name[i] == 'o'|| name[i] == 'u'){
      count = count+1;
    }
 
  }
   cout<<count;
  
  
  
}








