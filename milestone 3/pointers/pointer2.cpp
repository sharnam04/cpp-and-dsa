#include<iostream>
using namespace std;
int main()
{
    int i;//garbage
    cout<<i<<endl;
    i++;
    cout<<i<<endl;

    int *p;
    cout<<p<<endl;
    cout<<*p<<endl;

    //NULL POINTER (IF WE DON'T HAVE INITIAL VALUE;
    int *k=0;
    (*k)++;
    cout<<*k;
}