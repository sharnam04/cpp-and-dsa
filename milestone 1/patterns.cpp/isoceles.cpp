#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter the number of rows : ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int space=1;
        while(space<=n-i)
        {
            cout<<" ";
            space++;
        }

        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }

         j=i-1;
        while(j>0)
        {
          cout<<j;
          j--;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}