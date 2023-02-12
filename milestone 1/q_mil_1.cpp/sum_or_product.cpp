#include<iostream>
using namespace std;

int main() {
	int n;// n is number 
    cin>>n;
    cout<<endl;
    int c;//c is choice
    cin>>c;
    int sum=0;
    int product =1;
    if(c==1)
    {
       for(int i=0;i<=n;i++)
       {
           sum=sum+i;
       }
        cout<<sum;
    }
    else if(c==2)
    { 
        for(int i=1;i<=n;i++)
        {
            product=product*i;
        }
        cout<<product;
    }
	else
    {
        cout<<"-1";
    }
    return 0;
}

