#include<iostream>
using namespace std;

int sum(int * a, int size)// int * a in place of int a[] as it behaves as a pointer only
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}

int main()
{
    int a[10];
    cout<<sizeof(a)<<endl;
    cout<<sum(a,10)<<endl;//garbage values in array
}