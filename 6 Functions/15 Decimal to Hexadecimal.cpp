/******************************************************************************
Decimal to Hexadecimal
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string dec2hex(int n){
    string ans="";
    int x=1;
    while(x<=n){
        x*=16; //goes to max power less than the number
    }
    x/=16; 
    
    while(x>0){
        int lastdigit=n/x; //quotient of n/x in int form no points
        n-= lastdigit*x;
        x/=16; 
        
        if (lastdigit<=9)
            ans=ans + to_string(lastdigit); // to_string() converts int to string
    
        else{
            char c='A' + lastdigit -10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main(){
    int n; //bcz abc are also involved with 123
    cout<<"Enter Decimal no to convert to Hexadecimal: ";
    cin>>n;
    cout<<dec2hex(n);
    return 0;
}
