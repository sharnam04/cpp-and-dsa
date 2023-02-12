#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char ch;
    //cout<<"enter the character : "<<endl;
    cin>>ch;
    int y=ch;
    
    if(y>=97&&y<=122)
    {
        cout<<"0"<<endl;
    }
    else if(y>=65&&y<=90)
         {
            cout<<"1"<<endl;
         }
    else
         {
             cout <<"-1"<<endl;
         }
    
    return 0;
}



