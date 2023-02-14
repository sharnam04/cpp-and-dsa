#include<iostream>
using namespace std;
void merge(int *arr,int s ,int e)
{
    int mid=(s+e)/2;
    
    int len1=mid-s+1;
    int len2=e-mid;

    int *a1=new int[len1];
    int *a2=new int[len2];

    int k=s;
    for(int i=0;i<len1;i++)
    {
        a1[i]=arr[k++];
    }

    k=mid+1;
    for(int i=0;i<len1;i++)
    {
        a2[i]=arr[k++];
    }
    // merge

    int index1=0;
    int index2=0;
    int minarrayindex=s;

    while(index1<len1 && index2<len2)
    {
        if(a1[index1]<a2[index2])
        {
            arr[minarrayindex++]=a1[index1++];
        }
        else{
            arr[minarrayindex++]=a2[index2++];
        }
    }
    while(index1<len1)
    {
        arr[minarrayindex++]=a1[index1++];
    }
    while(index2<len2)
    {
        arr[minarrayindex++]=a2[index2++];
    }
    delete [] a1;
    delete [] a2;
}
void mergesort(int *arr ,int s , int e)
{
    int mid=(s+e)/2;
    if(s>=e)
    {
        return;
    }
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

//  merge the sorted array

    merge(arr,s,e);
}
int main()
{
    int n;
    cin>>n;

    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"array before sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergesort(arr,0,n-1);
    
    cout<<"array after sorting : ";
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0;
}