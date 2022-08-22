/******************************************************************************
Pythagorean triplet using functions
*******************************************************************************/

#include <iostream>

using namespace std;

int max(int x, int y, int z){
    if(x>y && x>z){
        return x;
    }
    else if(y>z){
        return y;
    }
    else{
        return z;
    }
}

bool check(int x, int y, int z){
   
    int a= max(x,y,z);
    int b,c;
    if (a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    
    if (a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }
}

int main()
{   
    int x,y,z;
    cout<<"Enter three numbers : ";
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"Pythagorean triplet";
    }
    else{
        cout<<"Not a Pythagorean triplet";
    }
    return 0;
}
