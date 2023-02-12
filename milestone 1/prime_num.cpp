#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    bool divided =false;

    for(int i=2;i<=n;i++)
    {
      for(int d=2;d<i;d++)
      {
          if(i%d==0)
          {
              divided =true;
              break;
          }       
      }
          if(!divided)
          {
              cout<<i<<endl;
          }

    }
    return 0;
}


