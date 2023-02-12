#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    if(x++ > 10 && ++y > 20 ) // y not operated bcz first condition is false 
    {
    cout << "Inside if ";
    } 
    else
    {
    cout << "Inside else ";
    }
    cout << x << " " << y;
    return 0;
}