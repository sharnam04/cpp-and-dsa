 # include <iostream>
using namespace std;
int main()
{
    // char c;
    // int count =0;
    // cin>>c;
    // while(c!='$')
    // {   count++;
    //     cin>>c;//cin doesn't count space, enter , tab as new character
    // }
    // cout<<count;

    char c;
    int count =0;
    c=cin.get();
    while(c!='$')
    {   count++;
      c=cin.get();  // cin.get() count space, enter , tab as new character
    }
    cout<<count;




    return 0;
}