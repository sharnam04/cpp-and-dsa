// #include<iostream>
// using namespace std;


// int main()
// { int n;
//  // cout<<"enter the number of rows : ";
//  cin>>n;
//  int n1=(n+1)/2;//n1 is number of rows in first half
//  int n2=n/2;//n2 is number of rows in second half
//     int i=1;
//     while(i<=n1)
//     {
//         int spaces=1;
//         while(spaces<=n1-i)
//         {
//             cout<<" ";
//             spaces++;
//         }
//     int j=1;
//     while(j<=2*i-1)
//     {
//       cout<<"*";
//         j++;
//     }
//        i++;
//        cout<<endl;
//     }
//  int k=1;
   
//  {while(k<=n2)
//     {
//         int space=1;
//         while(space<=k)
//         {
//             cout<<" ";
//             space++;
//         }
//         int l=1;
//         while(l<=2*(n2-k+1)-1)
//         {
//             cout<<"*";
//             l++;   
//         }
//         k++;
//         cout<<endl;
//     }
//  }
}

#include <iostream>
using namespace std;   
int main()
{
    int n;
    cin>>n;
    int n2=n/2;
    int n1=n2+1;
    int i=1;
    while(i<=n1)
    { 
        int spaces=1;
        while(spaces<=n1-i)
        {
            cout<<" ";
            spaces++;
        }
        int j=1;
        while(j<=2*i-1)
        { 
           cout<<"*";
           j++;
        }
        i++;
        cout<<endl;
    }
     
     i=n2;
     while(i>0)
     {
         int spaces=1;
         while(spaces<=n2-i+1)
         {
             cout<<" ";
             spaces++;
         }
         int j=1;
         while(j<=2*i-1)
         {
             cout<<"*";
             j++;
         }
         i--;
         cout<<endl;
     }
}