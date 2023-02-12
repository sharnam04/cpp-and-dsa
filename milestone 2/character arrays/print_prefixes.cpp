#include<iostream>
using namespace std;
int main()
{
    char a[10];
    cin>>a;
    for(int i=0;a[i]!=0;i++)//i is ending index
    {
       for (int j=0;j<=i;j++)
       {
           cout<<a[j];
       }
       cout<<endl;
    }
}