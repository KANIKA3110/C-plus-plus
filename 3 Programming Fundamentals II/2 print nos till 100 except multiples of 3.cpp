/******************************************************************************
continue and break statements- print nos till 100 except multiples of 3
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  for(int i=0; i<=100; i++){
    if(i%3==0){
        continue;
    }
    cout<<i<<endl;
}
    return 0;
}
