#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int * p= &i;
    cout<<p<<endl;//add
    cout<<&i<<endl;//address
    cout<<i<<endl;
    cout<<*p<<endl;//dereferencing
    cout<<sizeof(p)<<endl;
    i++;
    cout<<i<<endl;
    cout<<*p<<endl;

    int a = *p;
    a++;
    cout<<a<<endl;
    cout<<*p<<endl;// no change in i beacause of a

    int *q=p;
    cout<<*q;//same as p

}