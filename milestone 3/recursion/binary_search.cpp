#include<iostream>
using namespace std;
bool binarysearch(int arr[],int x,int s,int e)
{ 
    int mid=(e+s)/2;
    if(s>e)
    {
        return false;
    }
     if(arr[mid]==x)
    {
        return true;
    }
    if(arr[mid]<x)
    {
        return binarysearch(arr,x,mid+1,e);
    }
    else
    {
        return binarysearch(arr,x,s,mid-1);
    }
   
}
int main()
{
    int n;
    cin>>n;

    int * arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;

    bool ans=binarysearch(arr,x,0,n-1);
    if(ans)
    {
        cout<<"present";
    }
    else{
        cout<<"absent";
    }
}