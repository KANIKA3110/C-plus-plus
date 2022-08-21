/******************************************************************************
continue and break statements- user can go out only on odd days and only till your pocket money remains
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  int pocketmoney=3000;
    for(int day=1; day<30; day++){
    if(day%2==0){
        continue;
    }
    if(pocketmoney==0){
        break;
    }
    cout<<"You can go out today"<<endl;
    pocketmoney-=300;
}
    return 0;
}
