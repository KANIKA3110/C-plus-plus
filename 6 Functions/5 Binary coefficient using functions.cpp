/******************************************************************************
Binary coefficient 
nCr= n! / (n-r)! x r!
*******************************************************************************/

#include <iostream>

using namespace std;

int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main()
{   int n,r;
    cout<<"Enter the value of n and r: ";
    cin>>n>>r;
    cout<<"nCr is: "<<fact(n) / (fact(n-r)* fact(r));
    return 0;
}
