/******************************************************************************
Octal to decimal
*******************************************************************************/

#include <iostream>

using namespace std;

int octal2decimal(int n){
    int ans=0, x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}


int main()
{
    int n;
    cout<<"Enter the octal no to convert to decimal: ";
    cin>>n;
    cout<<octal2decimal(n);
    return 0;
}
