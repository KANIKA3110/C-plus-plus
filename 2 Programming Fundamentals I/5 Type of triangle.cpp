/******************************************************************************
WAP to find if traingle is scalene, equlateral or isoceles
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   int s1, s2,s3;
    cout<<"Enter the 3 sides: ";
    cin>>s1>>s2>>s3;
    
    if (s1==s2 && s2==s3){
        cout<<"The triangle is equilateral";
    }
    
    else if(s1==s2|| s1==s3|| s2==s3){
        cout<<"The triangle is isoceles";
    
    }
    
    else{
        cout<<"The triangle is scalene";
    }
    return 0;
}
