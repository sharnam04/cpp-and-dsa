#include <iostream>
using namespace std;
int main()
{
    int a=100;
    char c,d;
    c=a;
    int b=1990;
    d=b;
    cout<<c<<endl;
    cout<<d<<endl;//it will take only last bit as no. is big and char has only 1 byte
    return 0;
}