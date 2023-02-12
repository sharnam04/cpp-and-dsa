#include<iostream>
using namespace std;
int main()
{
    int arr[20][20];
    int m,n;
    cout<<"enter the number of rows and columns in array"<<endl;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    //print array row wise
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

// print array column wise
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}