#include<iostream>
using namespace std;
void bubblesort(int *arr,int n)
{
    if(n==0||n==1)
    {
        return;
    }
      for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
     bubblesort(arr,n-1);
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
    bubblesort(arr,n);
    // array after sorting
    cout<<"array after sorting : ";
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0;
}