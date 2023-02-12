#include<iostream>
using namespace std;
void increment(int n)
{
    n++;
}

void incr(int &n)
{
    n++;
}

int & f(int n)// receive data by reference// return by reference
{// bad practice
    int a;
    a=n;
    return a;
}

int * f2()
{// bad practice
    int i=10;
    return &i;
}

int main()
{
   int i=10;
   int &k=(i);

    int & j=f(i);// using a   as in the function // but scope of a is in function 

    int *p=f2(i);// but the memory is gone as it was a memory address of local variable i ,  after we return the function f2 it was gone

   increment(i);
   cout<<i<<endl;
   incr(i);// pass by reference
   cout<<i<<endl;

   return 0;
}