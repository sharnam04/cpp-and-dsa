#include<iostream>
using namespace std;
int length(char input[])
{
    int count=0;
    for(int i=0;input[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
void reversestring(char input[])
{
  int len =length(input);
  int i=0;
  int j=len-1;
  while(i<j)
  {
  char temp=input[i];
  input[i]=input[j];
  input[j]=temp;
  i++;
  j--;
  }
}
int main()
{
    char a[20];
    cout<<"enter the character array : ";
    cin>>a;
    reversestring(a);
    cout<<a;
}