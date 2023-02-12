#include<iostream>
using namespace std;
// void swap_f(int a[],int s,int e)
// {
//    if(s>=e)
//    {
//        return ;
//    }
//    swap(a[s],a[e]);
//    swap_f(a,s+1,e-1);
// }
void sw(int a[],int i,int n)
{
    if(i>=(n/2))
    { 
       return ;
    }
    swap(a[i],a[n-i-1]);
    sw(a,i+1,n-2);
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array before swap : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"array after swap : ";
    // swap_f(arr,0,n-1);
    sw(arr,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}