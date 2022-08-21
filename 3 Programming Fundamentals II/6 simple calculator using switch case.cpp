/******************************************************************************
switch case statement - simple calculator
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  
    int a,b;
    char op;
    cout<<"Enter 2 nos: ";
    cin>>a>>b;
    cout<<"Enter the operator (=,-,*,/): ";
    cin>>op;
    
    switch (op){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            if(b==0){
                cout<<"Error";
            }
            else{
                cout<<a/b;
            }
            break;
        default:
            cout<<"Wrong operator entered!";
    }
    
    

    return 0;
}
