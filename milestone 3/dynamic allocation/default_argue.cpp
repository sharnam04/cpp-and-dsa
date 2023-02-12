#include<iostream>
using namespace std;
int sum(int a,int b, int c,int d=0)// now default value of d is zero 
{
    return a+b+c+d;
}
int main()
{
//    int a[20];
//    int n;
//    cin>>n;// size of array
//    for(int i=0;i<n;i++)
// //    
//        cin>>a[i];
//    }

   cout<<sum(1,2,4);// not give error as d takes default value as 0
}