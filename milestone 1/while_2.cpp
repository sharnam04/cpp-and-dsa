#include<iostream>
using namespace std;

int main() 
{
	int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int d=2;
    bool divided = false;
    while(d<n)
    {
        if(n%d==0)
        {
            cout<<"not prime"<<endl;
            divided=true;
        }
        d=d+1;
    }
    if(!divided) 
    {
        cout<<"prime";
    }
    return 0;
}

