#include<iostream>
using namespace std;
// count number of ways to reach nth stair from 0th stair
int countways(long long n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    int ans= countways(n-1)+countways(n-2);

    return ans;
}
int main()
{
    int n;
    cin>>n;// number of stairs 
    cout<<countways(n)<<endl;
}