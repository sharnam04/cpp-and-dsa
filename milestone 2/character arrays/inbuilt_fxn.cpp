#include<iostream>
using namespace std;
#include<cstring>
// int main()
// {
//     char name[100];
//     cin>>name;
//     int len=strlen(name);// string length 
//     cout<<"length of string is : "<<len;
//     return 0;
// }

// length compare
int main()
{
   char name1[100];
   char name2[100];
   cin>>name1;
   cin>>name2;
  int a= strcmp(name1,name2);
if(a==0)
{
    cout<<"they are equal";
}
else
{
  cout<<"they are not equal";  
}

}