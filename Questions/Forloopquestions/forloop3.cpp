#include<iostream>
using namespace std;
int main(){
    cout<<"enter the counts of digits";
    int n;
    int temp = 0;
    cin>>n;

    for(int i = 1; i<=n; i++){
        cout<<i<<endl;
        temp = temp + i;
    }

    cout<<temp;
}
