// Write a C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space.
// Example:
// Sample Input: cpp string exercises
// Sample Output: Cpp String Exercises


#include <iostream>
using namespace std;

int main(){
    string change = "cpp string exercises";

    for(int i = 0; i<=((change.length()-1)); i++){
        if(change[i]==' '){
            change[i+1]=toupper(change[i+1]);
        }
        else if(i == 0){
            change[i]=toupper(change[i]);
        }
    }

    cout<<change<<endl;
 

    
}

