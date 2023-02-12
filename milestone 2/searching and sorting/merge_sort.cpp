#include<iostream>
using namespace std;
void merge(int * arr, int s ,int e)
{
    int mid=(e+s)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    
    int *first= new int [l1];
    int *second= new int[l2];
    
    //copy values
    int k=s;    // k is the index of main array
    for(int i=0;i<l1;i++)
    {
        first[i++]=arr[k++];
    }

     k=mid+1;
    for(int i=0;i<l2;i++)
    {
        second[i++]=arr[k++];
    }

    //merge two sorted array
    int index1=0;
    int index2=0;
    k=s;

    while(index1<l1 && index2<l2)
    {
        if (first[index1]<second[index2])
        {
           arr[k++]=first[index1++];
        }
        else{
            arr[k++]=second[index2++];
        }
        
    }
    while(index1<l1 )
    {
        arr[k++]=first[index1];
    }
    while(index2<l2)
    {
        arr[k++]=second[index2];
    }
}
void mergesort(int * arr, int s ,int e)
{
    int mid=(e+s)/2;
    if(s>=e)
    {
        return ;
    }
    // sorting left part
    mergesort(arr,s,mid);
    // sorting right part
    mergesort(arr,mid+1,e);
    // merge
    merge(arr,s,e);
}
int main()
{
    int n;
    cout<<"enter the number of elements in array : " ;
    cin>>n;
    int *arr= new int[n];
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}