/******************************************************************************
switch case statement - print different types of hello for button = a,b,c,d,e
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  
    char button;
    cout<<"Input a character: ";
    cin>>button;
    
    switch (button){
        case 'a':
            cout<<"Hello";
            break;
        case 'b':
            cout<<"Namaste";
            break;
        case 'c':
            cout<<"Salut";
            break;
        case 'd':
            cout<<"Hola";
            break;
        case 'e':
            cout<<"Ciao";
            break;
        default:
            cout<<"I am still learning more";
    }
    
    
    return 0;
}
