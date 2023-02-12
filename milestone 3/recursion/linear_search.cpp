#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int x)
{
    if(n==0)
    {
        return false;
    }
    if(arr[0]==x)
    {
        return true;
    }
    bool small_cal=linearsearch(arr+1,n-1,x);
    return small_cal;
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
    int x;
    cin>>x;
    bool ans=linearsearch(arr,n,x);
    if(ans)
    {
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}