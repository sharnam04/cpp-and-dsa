#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in array : ";
    cin>>n;//size of array , number of elements to added in array
    int input[10];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    for(int i=n-1;i>=0;i--)// printing in reversing order
    {
        cout<<input[i]<<endl;
    }
    return 0;
 }