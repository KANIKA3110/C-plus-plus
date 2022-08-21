/******************************************************************************
check if a no is prime or not
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  
    int n,i;
    cout<<"Enter a no: "<<endl;
    cin>>n;
    
    for(i=2; i<n; i++){
        if (n%i==0){
            cout<<"Non-prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Prime";
    }

    return 0;
}
