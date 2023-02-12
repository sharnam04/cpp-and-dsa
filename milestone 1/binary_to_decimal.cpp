#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int binary;
    cin>>binary;
    int m,r,decimal=0;
    int n=0;
    while(m!=0)
    {
        m=binary/10;
        r=binary%10;
        decimal=decimal+r*pow(2,n);
        binary=m;
        n++;
    }   
	cout<<decimal;
     return 0;
}