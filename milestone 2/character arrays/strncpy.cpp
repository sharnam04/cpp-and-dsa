#include<iostream>
using namespace std;
int main()
{
    char a[10],b[10];
    cin>>a;
    cin>>b;
    cout<<"a :"<<a<<endl;
    cout<<"b : "<<b<<endl;
    strncpy(a,b,4);
    cout<<"a :"<<a<<endl;
    cout<<"b : "<<b<<endl;
    return 0;
}