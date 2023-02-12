#include<iostream>
using namespace std;
void printarray(int arr[][5],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int a[5][5]={{1,2},{3,4}};
    // int m,n;
    // cin>>m>>n;

    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cin>>a[i][j];
    //     }

    
    printarray(a,5,5);
    
}