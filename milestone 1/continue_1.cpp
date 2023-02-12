#include <iostream>
using namespace std;
int main()
{   int i=1;
    while(i<10)
    {    
        if(i==7)
        {
            i++;//important otherwise i will remain 7 only
            continue;
        }
        cout<<i<<endl;
        i++;
    }

    for(int j=1;j<6;j++)
    {
       if(j==4)
        {
            continue;
        }
         cout<<j<<endl;
    }
    
    return 0;
}
