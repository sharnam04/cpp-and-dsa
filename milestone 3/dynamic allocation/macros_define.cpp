#include<iostream>
using namespace std;
# define PI 3.14
int main()
{
    int r=10;
    //cout<<3.14*r*r<<endl; not using these as we have to write again and again 3.14 so we use pi instead 

    cout<< PI*r*r<<endl;// best method as during compilatiokn it will read pi as 3.14 only

}