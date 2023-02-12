#include<iostream>
using namespace std;
// bool is_sorted(int a[] ,int size)
// {
//     if(size==0 || size==1)
//     {
//         return true;
//     }
//     if(a[0]>a[1])
//     {
//         return false;
//     }
//     bool smallsorted = is_sorted(a+1,size-1);
//     return smallsorted;
// }
// 2nd method
bool is_sorted_2(int a[], int n)
{
    if(n==0||n==1)
    {
        return true;
    }
    bool is_smaller=is_sorted_2(a+1,n-1);
    if( !is_smaller)
    {
        return false;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    else{
    return true;
    }
}
int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<is_sorted_2(arr,size)<<endl;
}