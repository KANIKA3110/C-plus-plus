/******************************************************************************
Prime or not
*******************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"enter a no : ";
    cin>>n;
    int flag=0;
    
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Non-prime"<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0){
        cout<<"Prime";
    }
    
    
    return 0;
}