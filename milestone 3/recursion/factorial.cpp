#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
     return 1;
    }
   // int smalloutput=factorial(n-1);
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    int output=factorial(n);
    cout<<"the factorial of "<< n <<" is "<<output<<endl;;
    return 0;
}