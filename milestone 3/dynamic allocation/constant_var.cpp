#include<iostream>
using namespace std;
int main()
{
    int const i=10;
    //i++;       const so can't be changed 
    cout<<i<<endl;

// const reference from a non constant int 
    int i1=12;
    const int & j1=i1;
    i1++;
   // j1++;  can't do 
    cout<<i1<<endl;

// const ref from a const int 
int const i2=120;
const int &j2=i2;
// i2++
// j2++
cout<<i2<<endl;

// reference from a constant integer
int const i3=12;
//int &j3=i3;   error as we have read onlypermisiion for above integer memory location


}