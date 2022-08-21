#include <iostream>

using namespace std;

int main()
{   //MAX OF 3 NOS
    int a, b,c;
    cout<<"Enter 3 nos: ";
    cin>>a>>b>>c;
    int max=0;
    
    if (a>b){
        if (a>c){
            max=a;
        }
        else {
            max=c;
        }
    }
    
    else if (b>c){
        max=b;
        }
    
    else {
        max=c;
    }
    
    cout<<"Maximum is "<<max;
    
    return 0;
}
