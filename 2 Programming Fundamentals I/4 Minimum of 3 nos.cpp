#include <iostream>

using namespace std;

int main()
{   //MIN OF 3 NOS
    int a, b,c;
    cout<<"Enter 3 nos: ";
    cin>>a>>b>>c;
    int min=0;
    
    if (a<b){
        if (a<c){
            min=a;
        }
        else {
            min=c;
        }
    }
    
    else if (b<c){
        min=b;
        }
    
    else {
        min=c;
    }
    
    cout<<"Minimum is "<<min;
    
    return 0;
}
