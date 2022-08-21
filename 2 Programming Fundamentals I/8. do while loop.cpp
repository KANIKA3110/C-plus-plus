/******************************************************************************
Take input till negative no is given - do while loop
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  int n;
    cout<<"Enter no: ";
    cin>>n;
    do{
        cout<<n<<endl;
        cout<<"Enter Next No: ";
        cin>>n;
    }while (n>0);
    return 0;
}
