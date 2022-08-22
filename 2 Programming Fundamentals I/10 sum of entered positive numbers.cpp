/******************************************************************************
                         Add only positive nos
*******************************************************************************/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    
    while(n>0){
        sum+=n;
        cout<<"Enter another number: ";
        cin>>n;
    }
    cout<<"Sum is: "<<sum;
    return 0;
}
