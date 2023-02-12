#include<iostream>
using namespace std;

int main() {
	int n,m,r;//r is remainder
    cin>>n;
    int SE=0,SO=0;
//SE sum of even numbers , SO Sum of odd digits
	while(n!=0)
    {
        m=n/10;
        r=n%10;
        if(r%2==0)
        {
            SE=SE+r;
        }
        else
        {
            SO=SO+r;
        }
        n=m;
    }
    cout<<SE<<" "<<SO;
    return 0;
}

