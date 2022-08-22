/******************************************************************************
Armstrong number or not
*******************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a no : ";
    cin>>n;
    int sum=0;
    int x=n;
    
    while(n>0){
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if (sum==x){
        cout<<"It is an Armstrong no";
    }
    
    else{
        cout<<"Not an Armstrong no";
    }
    
    return 0;
}