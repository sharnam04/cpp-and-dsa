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
int main()
{
    char name[7];
    cin>>name;
    cout<<"length : "<<length(name);
   
}