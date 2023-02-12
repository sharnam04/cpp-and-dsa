#include<iostream>
using namespace std;
void printarray(int input[],int n)
{
        cout<<"print : ";
    for(int i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
}
void reverse(int input[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    int b[10]={1,2,3,4,5};
    reverse(b,5);
    printarray(b,5);

}