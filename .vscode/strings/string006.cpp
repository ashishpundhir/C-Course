//append, //push_back, //pop_back, // clear    
// uses of these function


#include <iostream>

using namespace std;

int main() {
  cout<<"Enter a sentence  ";
  string name;
  getline(cin,name);
  // name.push_back('a');    //// to add one more leter
  // name.pop_back();        // to remove last later from the word
  name.append(" is a good boy");
  cout<<name;
  
  
  
}








