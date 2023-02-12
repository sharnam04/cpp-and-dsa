#include<iostream>
using namespace std;
int partition(int arr[],int s, int e)
{
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
          count++;
        }
    }
    // place pivot at right index
    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);

    int i=s,j=e;
    
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<pivot)
        {
           i++;
        }
        while(arr[j]>pivot)
        {
           j--;
        }
    }
    if(i<pivotindex && j>pivotindex)
    {
        swap(arr[i++],arr[j--]);
    }

    return pivotindex;
}
void quicksort(int arr[], int s, int e)
{
    
    if(s>=e)
    {
        return ;
    }
    // partition
    int p=partition(arr,s,e);
    // left part
    quicksort(arr,s,p-1);
    // right part
    quicksort(arr,p+1,e);

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
    // array before sorting
    cout<<"array before sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    // array after sorting
    cout<< "array after sorting : ";
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0;
}