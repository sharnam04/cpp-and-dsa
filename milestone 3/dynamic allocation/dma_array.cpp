#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the number of element in array : ";
    cin>>n;
    int * p= new int[n];// dynamically allocating memory to array so no wastage or shortage of space
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    int max=-1;// let all are positive numbers 
    for(int i=0;i<n;i++)
    {
        if(p[i]>max)
        {
            max=p[i];
        }
    }
    cout<<"the maximum element in array is : "<<max<<endl;

}