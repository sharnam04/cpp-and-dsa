#include <iostream>
using namespace std;

//#include "solution.h"
void swapAlternate(int *arr, int size)
{
    //Write your code here
   
    if(size%2==0)
    {
         int i=0,temp;
        while(i<size){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
            i+=2;
        }
    }
    else
    {
         int i=0,temp;
        while(i<size-1)
        {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
            i+=2;
        }
    }
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}