#include<iostream>
using namespace std;
int cnt=0;
int count(int n)
{
    if(n==0)
    {
        return cnt;
    }
    n=n/10;
    cnt++;
    count(n);
}
int main()
{
    int n;
    cin>>n;
    count(n);
}