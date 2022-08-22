/******************************************************************************
Sum of first n natural nos using functions
*******************************************************************************/

#include <iostream>

using namespace std;

int sum(int n){
    int s=n*(n+1)/2;
    return s;
}

int main()
{   
    int n;
    cout<<"Enter a nos: ";
    cin>>n;
    cout<<sum(n);
    return 0;
}
