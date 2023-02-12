#include<iostream>
using namespace std;
#include<cstring>
void reverse(string & str,int i,int j)
{
    if(i>j)
    {
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}
int main()
{
    string name="sharnam";
    cout<<"string initially : "<<name<<endl;
 
    reverse(name,0,name.length()-1);

    cout<<"string after : "<<name;
}