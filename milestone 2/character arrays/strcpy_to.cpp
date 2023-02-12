#include<iostream>
using namespace std;
int main()
{
    char a[10];
    char b[10];
    cin>>a;
    cin>>b;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    strcpy(a,b);
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    char c[10];
    
    strcpy(a,"hello");
    cout<<"a :"<<a<<endl;
    
    return 0;
}