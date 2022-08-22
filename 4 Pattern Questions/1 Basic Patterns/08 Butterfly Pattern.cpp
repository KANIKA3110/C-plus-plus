/******************************************************************************
Butterfly Pattern
*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    
    //upper half
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            
            if(j<=i || j>=2*n-i+1){
                cout<<"*";
                }
            else{
                cout<<" ";
                }
           
            
        }
        cout<<endl;
    }
    
    //lower half-only change in first for loop
    for(int i=n;i>=1;i--){
        for(int j=1;j<=2*n;j++){
            
            if(j<=i || j>=2*n-i+1){
                cout<<"*";
                }
            else{
                cout<<" ";
                }
           
            
        }
        cout<<endl;
    }
    
    return 0;
}