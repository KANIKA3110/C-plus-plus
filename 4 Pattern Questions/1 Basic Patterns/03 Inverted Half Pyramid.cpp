/******************************************************************************
Inverted half pyramid
*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    
    for (int i=n; i>=1;i--){
        //for(int j=i; j>=1;j--) or
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}