#include<iostream>
using namespace std;


int main()
{   int n;
cout<<"enter the number of rows : ";
cin>>n;
int i=1;
int val=1;
while(i<=n)
{ 
    int k=1;
    while(k<=n-i)
    {
        cout<<" ";
        k=k+1;
    }
    int j=1;
    while(j<=i)
    {
        cout<<val;
        j=j+1;
        val=val+1;
    }
    i=i+1;
    cout<<endl;

}
    return 0;
    
}