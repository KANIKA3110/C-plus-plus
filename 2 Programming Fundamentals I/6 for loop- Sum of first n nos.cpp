/******************************************************************************
Sum of first n nos
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  int n;
    cout<<"Enter no: ";
    cin>>n;
    int sum=0;
    
    for(int i=0 ; i<=n ; i++ ){
        sum+=i;
    }
    cout<<"Sum of first "<<n<<" nos is: "<<sum;
    return 0;
}
