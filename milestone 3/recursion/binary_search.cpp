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
    cout<<"the size of array is : ";
    cin>>n;

    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    int x;
    cout<<"the element to be searched : ";
    cin>>x;
    
    bool ans=binarysearch(arr,x,0,n-1);
    if(ans){
        cout<<"the element is present in array"<<endl;
    }
    else{
        cout<<"the element is not present in array"<<endl;
    }
    
    delete [] arr;
    return 0;
}