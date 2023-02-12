#include <iostream>
using namespace std;
int foundunique(int *input,int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(input[i]==input[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            return input[i];
        }
    }
}
int main()
{
    int n;//n is size of array
    cin>>n;
    int *input= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    cout<<foundunique(input,n)<<endl;
    return 0;
}
