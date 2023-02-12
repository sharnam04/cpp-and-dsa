#include<iostream>
using namespace std;
int main()
{
    int a=234354;
    char c=a;// it will shoe only last bit from 4 bytes 111001001101110010      print only 01110010 (1 byte for char)
    unsigned int b=-123;// it will become huge as unsigned
    cout<<c<<endl;
    cout<<b<<endl;
    return 0;
}