#include<iostream>
using namespace std;
void g(int const &a)
{
     a++;//     cannot assign to variable 'a' with const-qualified type 'const int &'
}
void f(const int *p)
{
     (*p)++;   //   read-only variable is not assignable
}
int main()
{ 
    // int const i=10;
    // // int * p=&i;   error as integer is constatnt
    // int const *p= &i;  // p is pointer to constant integer


    // int j=12;
    // int const *p2=&j;
    // p2++;
    // j++;
    // //(*p2)++; read-only variable is not assignable

     int j=10;
     int  * p3=&j;
     f(p3);
     g(p3);

     /* int * const p2=&i;;    constant pointer
        (*p2)++;  valid 
        p2+&j     not valid because pointer is constant */
        
    
}