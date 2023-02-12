#include<iostream>
using namespace std;

int main() {
	int x,n;
    cin>>x>>n;
    int pow=x;
    
    if(n==0)
    {
        pow=1;
    }
    
    else 
    {
        int i=1;
        while(i<n)
        {
        pow=pow*x;
        i=i+1;
        }
    }
    cout<<pow;
    return 0;
}

