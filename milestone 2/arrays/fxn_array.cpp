#include<iostream>
using namespace std;
void printarray(int input[],int n)//n is important for printing condition
{
        //cout<<"function : <<sizeof(input[);  it gives answer 8 as it is adress
        cout<<"print : ";
    for(int i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
}
int main()
{
   int n;
   cin>>n;
   int input[100];
   cout<<"enter the array elements : ";
   for(int i=0;i<n;i++)
   {
       cin>>input[i];
   }
   cout<<"function : "<<sizeof(input)<<endl;//it is 4*100=400
   printarray(input,n);
}