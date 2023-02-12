#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in array : ";
    cin>>n;//size of array , number of elements to added in array
    int input[100];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    // int max=input[0];                    if n=0
    // for(int i=1;i<n;i++)
    // {
    //     if(input[i]>max)
    //     {
    //         max=input[i];
    //     }
    // }
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(input[i]>max)
        {
            max=input[i];
        }
    }

    cout<<"the maximum element of array is "<<max<<endl;
    return 0;
 }