#include<iostream>
using namespace std;
int main()
{
    int a[10];
    a[0]=5;
    a[1]=10;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*a<<endl;
    cout<<a[0]<<endl;

    cout<<*(a+1)<<endl;
    cout<<a[1]<<endl;
    //cout<<i[a]<<endl;

    // pointer
    // int * p;
    // cout<<a<<endl;
    // cout<<&a<<endl;

    // cout<<p<<endl;
    // cout<<&p<<endl;

    int *p=&a[0];
    cout<<p<<endl;//same
    cout<<a<<endl;//same as add of a

    cout<<sizeof(p)<<endl;
    cout<<sizeof(a)<<endl;

    p=p+1;
    a=a+1;// error
}