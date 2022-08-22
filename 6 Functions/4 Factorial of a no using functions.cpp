/******************************************************************************
Factorial of a no using functions
*******************************************************************************/

#include<iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for (int i=1; i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    cout<<fact(n);
    return 0;
}