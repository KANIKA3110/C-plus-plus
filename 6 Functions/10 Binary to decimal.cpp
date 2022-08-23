/******************************************************************************
Binary to decimal
*******************************************************************************/

#include <iostream>

using namespace std;


int binary2decimal(int n){
    int ans=0;
    int x=1; //denotes the power of 2 eg first is 2^0=1
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter binary no for converting to decimal: ";
    cin>>n;
    cout<<binary2decimal(n);

    return 0;
}
