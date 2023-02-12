#include <iostream>
using namespace std;
int main()
{   int n;
    cin>>n;//prime or not
    bool divided = false;
   for(int d=2;d<n;d++)
   {
       if(n%d==0)
       {
          divided =true;
          break;
       }
   }
   if(divided)
   {
       cout<<"not prime"<<endl;
   }
   else{
       cout<<"prime"<<endl;
   }
    return 0;
}
