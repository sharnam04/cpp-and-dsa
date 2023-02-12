#include <iostream>
using namespace std;
void insertionSort(int *arr, int n)
{
    //Write your code here
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j;
        for( j=i-1;j>=0;j--)
        {
            if(current<arr[j])
            {
                arr[j+1]=arr[j];//shifting right
            }
            else
            {
               break;
            }
        }
        arr[j+1]=current;
    }
}
int main()
{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		insertionSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	
}