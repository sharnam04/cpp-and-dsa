#include<iostream>
using namespace std;

inline int max(int a , int b)
{
    return (a>b)?a:b ;// useful only when code is small in this function
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<max(a,b);

}