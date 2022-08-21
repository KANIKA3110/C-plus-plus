/******************************************************************************
Take input till negative no is given
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  int n;
    cout<<"Enter no: ";
    cin>>n;
    while(n>0){
        cout<<n<<endl;
        cout<<"Enter Next No: ";
        cin>>n;
    }
    return 0;
}
