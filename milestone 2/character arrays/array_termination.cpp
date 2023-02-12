#include<iostream>
using namespace std;
int main()
{
    char d[10];
    cin>>d;// ram
    cout<<d<<endl;
    d[4]='x';
    cout<<d<<endl;
    d[1]='\0';
    cout<<d;
}