#include <iostream>
using namespace std;
int main()
{   int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    int i=1;
    int p=1;
    while(i<=n)
    {
        int j=1;
        
        while(j<=i)
        {
            cout<<p;
            p=p+1;
            j=j+1;
        }
        i=i+1;
        cout <<endl;
    }
    return 0;
}
