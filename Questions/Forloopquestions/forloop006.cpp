#include<iostream>
using namespace std;
 int evenOdd(int a,int b){
    bool value =1;
    for(int i = a; i<=b;i++){
        for(int j = 2; j<=a/2;j++){
            if(i%j==0){
               value = 0;
               break;
               
            }
      

            
            
        }
        if(value){
            cout<<i<<" "<<endl;
        }
    }
  return 0;
 }


int main(){
    cout<<"enter the start range \t";
    int num;
    cin>>num;
    int num2;
    cout<<"enter the end range";
    cin>>num2;
    evenOdd(num,num2);
    

}