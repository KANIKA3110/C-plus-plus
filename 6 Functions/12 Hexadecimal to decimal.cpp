/******************************************************************************
Hexadecimal to decimal
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h> //standard c++ . h has string, vector, .size() etc
using namespace std;

int hex2decimal(string n){
    int ans=0, x=1;
    int s=n.size();
    
    for(int i=s-1; i>=0;i--){
        
        //for 0 to 9
        if(n[i]>= '0' && n[i] <= '9'){
            ans+=x*(n[i]-'0'); //if character is 2 the 2th char - 0 =2
        }
        
        //for A TO F
        else if (n[i]>= 'A' && n[i]<='F'){
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    
    return ans;
}

int main(){
    string n; //bcz abc are also involved with 123
    cout<<"Enter Hexadecimal no to convert to decimal: ";
    cin>>n;
    cout<<hex2decimal(n);
    return 0;
}
