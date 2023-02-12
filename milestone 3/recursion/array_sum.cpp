#include<iostream>
using namespace std;
int arr_sum(int arr[],int n)
{
   if(n==0)
   {
       return 0;
   }
   int sum=arr_sum(arr+1,n-1);
   return sum+arr[0];
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
    cout<<"the sum of array is " <<arr_sum(arr,n);
}