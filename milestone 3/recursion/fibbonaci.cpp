#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int small_o_1=fib(n-1);
    int small_o_2=fib(n-2);
    return small_o_1+small_o_2;
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}