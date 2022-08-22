/******************************************************************************
Half pyramid after 180 degree rotation
*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    
    /*for (int i=1; i<=n;i++){
        for(int j=n;j>=1;j--){
            if (j<=i){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    } or:*/
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}