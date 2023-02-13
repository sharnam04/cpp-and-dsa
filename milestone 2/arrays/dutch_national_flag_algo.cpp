#include<iostream>
using namespace std;// soting 0, 1 ,2 
void sortarr(int arr[],int n)
{
    int low=0;
    int high=n-1;
    int mid=0;

    while(mid<=high)
    {
      switch(arr[mid])
      {
          case 0:
          {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
            break;
          }

          case 1:
          {
              mid++;
              break;
          }

          case 2:
          {
            swap(arr[mid],arr[high]);
            high--;
            break;  
          }
      }
    }
}
int main()
{
   int n;
   cin>>n;
   int * arr = new int[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

   sortarr(arr,n);

   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}