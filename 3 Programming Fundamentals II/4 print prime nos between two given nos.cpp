/******************************************************************************
print prime nos between a and b
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  
    int i,j,a,b;
    cout<<"Enter 2 nos: "<<endl;
    cin>>a>>b;
    
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break; //breaks out of the inner for loop
            }
        }
        if(j==i){
        cout<<i<<endl;
        }
    }
    
    return 0;
}
