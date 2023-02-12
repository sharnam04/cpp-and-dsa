#include<iostream>
using namespace std;


int main()
{   int n,i=1;
cout<<"enter the number of rows in pattern : ";
cin>>n;
 
    while( i<=n)
    {
      int j=1;
      int p=i;
      while(j<=i)
      {
          cout<<p;
          j=j+1;
          p--;
      }
      cout<< endl;
      i=i+1;
    }
    return 0;
    
}



