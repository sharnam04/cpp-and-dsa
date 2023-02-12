#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int spaces=1;
        while(spaces<=n-i)
        {
            cout<<" ";
            spaces++;
        } 
        int j=1;
        int k=i;
        while(j<=i)
        {
            cout<<k;
            k++;
            j++;
        }
        int l=(2*i-2);
        while(l>=i)
        {
            cout<<l;
            l--;
        }
        i++;
        cout<<endl;   
    }
    return 0;
}