#include<iostream>
using namespace std;
bool checkpallindrome(int i, string &s)
{
    if(i>=s.size()/2)
    {
        return true;
    }
    if(s[i]!=s[s.size()-i-1])
    {
        return false;
    }
   return checkpallindrome(i+1,s);
}
int main()
{
    string s;
    cin>>s;
    int ans=checkpallindrome(0,s);
    if(ans)
    {
        cout<<"this is a pallindrome"<<endl;
    }
    else
    {
        cout<<"this is not a pallindrome"<<endl;
    }
    return 0;
}