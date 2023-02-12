#include<iostream>
using namespace std;
int main()
{
    // int i=10;
    // int j=i;
    // i++;
    // cout<<j<<endl;

    int i=10;
    int &j=i;// j is a reference variable pointing to same memory location of i 
    cout<<i<<endl;
    cout<<j<<endl;
    int k=50;
    j=k;      // values will change in memory of i as j and i points to same memory
    cout<<i<<endl;
    cout<<j<<endl;

    i++;
    cout<<j<<endl;

    j++;
    cout<<i<<endl;

    int l=100;
    j=l;// j is reference variable to same memory as i so change will be at the memory address of i
    cout<<i<<endl;
    return 0;
}