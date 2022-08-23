/******************************************************************************
Decimal to octal
*******************************************************************************/

#include <iostream>

using namespace std;

int dec2oct(int n){
    int ans=0,x=1;
    while(x<=n){
        x*=8; //goes to max power less than the number
    }
    x/=8; // eg x=8, n=12 so to avoid it going to 16
    
    while(x>0){
        int lastdigit=n/x; //quotient of n/x in int form no points
        n-= lastdigit*x;
        x/=8; 
        ans=ans*10 + lastdigit;
    }
    return ans;
}

int main(){
    int n; 
    cout<<"Enter Decimal no to convert to Octal: ";
    cin>>n;
    cout<<dec2oct(n);
    return 0;
}
