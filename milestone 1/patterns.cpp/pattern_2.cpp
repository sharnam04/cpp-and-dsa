#include<iostream>
using namespace std;


int main()
{   int n,i=1;
cout<<"enter the number of rows in pattern : ";
cin>>n;
int val=1;
 
    while( i<=n)
    {
      int j=1;
      while(j<=i)
      {
          cout<<val<<" ";
          j=j+1;
          val=val+1;
      }
      cout<< endl;
      i=i+1;
    }
    return 0;
    
}