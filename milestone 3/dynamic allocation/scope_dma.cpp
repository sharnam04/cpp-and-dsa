#include<iostream>
using namespace std;
int main()
{
    // while(true)
    // {
    //     int i=10;     use 4 bytes at any time because after loop end it is out of scope
    // }

    // while(true)
    // {
    //     int *p=new int ;// uses every time new bytes for new int dunamically allocated 
    // }
    int *p=new int ;
    delete p;// p is not deleted ,the integer to which p was pointing is deleted
    p=new int;
    *p=10;
    cout<<*p<<endl;

    // in case of array
    int *t=new int[100];
    delete [] t;// deallocate memory
}