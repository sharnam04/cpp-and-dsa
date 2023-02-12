#include<iostream>
using namespace std;

int main() 
{
    int n; 
    cin>>n;
    bool divide = false;
    for(int d=2;d<n;d++)
    {
        if (n%d==0)
        {
          divide =true ;
        }
    }
    if(divide)
    {
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
    return 0;
}