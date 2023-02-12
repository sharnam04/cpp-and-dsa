#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3};
    char c[]="abc";
    cout<<c<<endl;//actually prints full character array

    char b[]="abc";
    char *p=&b[0];
    cout<<p<<endl;

    char c1='a';
    char *pr=&c1;
    cout<<c1<<endl;
    cout<<pr<<endl;

}