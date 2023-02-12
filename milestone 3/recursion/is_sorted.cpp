#include<iostream>
using namespace std;
bool issorted(int arr[],int n)
{
    if(n==0||n==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    
    bool ans=issorted(arr+1,n-1);
    
    return ans;
}
int main()
{
    int n ;
    cin>>n;

    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool ans=issorted(arr,n);
    cout<<ans;
    delete [] arr;
    
}