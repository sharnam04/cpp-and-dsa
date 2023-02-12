#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int fib=1;
    int fib1=1;
    int fib2=1;
    for(int i=0;i<n-2;i++)
    {
      
      fib=fib1+fib2;
      fib1=fib2;
      fib2=fib;    
    }
    cout<<fib;
    return 0; 
}