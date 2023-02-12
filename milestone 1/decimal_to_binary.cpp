#include<iostream>
using namespace std;

int main() {
	int num;//decimal no.    
    cin>>num;
    long pv=1;//because numbe can be very large so take pow
    long binary=0;;
    int m,r;
    
	while(num!=0)
    {
        num=num/2;
        r=num%2;
        binary=binary+r*pv;
        pv=pv*10;
        num=m;
    }
    cout<<binary;
    return 0;
}

