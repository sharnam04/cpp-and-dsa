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
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        j=i-1;
        while(j>0)
        {
            cout<<"*";
            j--;
        }
        i++;
        cout<<endl;   
    }
    return 0;
}