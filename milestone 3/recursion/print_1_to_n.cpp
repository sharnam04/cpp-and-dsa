#include<iostream>
using namespace std;
// void print(int i,int n)
// {
//     if(i>n)
//     {
//         return ;
//     }
//     cout<<i<<" ";
//     print(i+1,n);
// }

// void print(int n){
//     //write your code here
//     if(n<1)
//     {
//         return ;
//     }
//     print(n-1);
//     cout<<n<<" ";
// }

int cnt=1;
void print(int n)
{
  if(n==0)
  {
    return ;
  }
  cout<<cnt<<" ";
  cnt++;
  print(n-1);
}

int main()
{
    int n;
    cin>>n;
    print(n);
}
