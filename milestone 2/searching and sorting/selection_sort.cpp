#include<iostream>
using namespace std;
void selectionsort(int *input,int n)
{
    for(int i=0;i<n-1;i++)// ith row
    {
     int min=input[i],minindex=i;
     for(int j=i+1;j<n;j++)
        {
         if(input[j]<min)
         {
             min=input[j];
             minindex=j;
         }
        }
         //swap
         int temp=input[i];
         input[i]=input[minindex];
         input[minindex]=temp;
        
    }
}
int main()
{
    int n;//size of array
    cin>>n;
    int *input=new int[n];
    for(int i=0;i<n;i++)
    {
       cin>>input[i];
    }
    selectionsort(input,n);
    for(int i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
return 0;
}