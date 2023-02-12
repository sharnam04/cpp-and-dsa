#include<iostream>
using namespace std;
int main()
{
    int i=65;
    char c=i;
    cout<<c<<endl;// A

    int *p=&i;
    char *pc=(char *)p;// explicit typecasting allowed

    cout<<p<<endl;
    cout<<pc<<endl;// will print till it get null character  A
    cout<<(*p)<<endl;// 65
    cout<<(*pc)<<endl;// A because lsb in first bit
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;


}