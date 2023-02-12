
#include<iostream>
using namespace std;


int main()
{
int sum=0,i=0;
int N;
    // cout<<"enter the value of N : ";
    cin>>N;
    
    while(i<=N)
    {
        if(i%2==0)
        {
        sum=sum+i;
        }
        i=i+1;
    }
    cout<<sum<<endl;
 return 0; 
}