#include <iostream>
using namespace std;

boolisPrime(int n)
{
    int d=2;
    while(d<n)
    {
        if(n%d==0)
        {
            return false;
        }
        d++;
        return true;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int x=2;x<=n;x++)
    {
        if(boolisPrime)
        {
            cout<<x<<endl;
        }
    }
}