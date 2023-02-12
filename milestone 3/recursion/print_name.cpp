#include<iostream>
using namespace std;
// void print(int n)
// {
//    if(n<1)
//    {
//        return ;
//    }
//    cout<<"sharnam ";
// print(n-1);
// }
void print(int i, int n)
{
    if(i>n)
    {
       return ;
    }
    cout<<"SHARNAM "<<endl;
    print(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    print(1,n);
}