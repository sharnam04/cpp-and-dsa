#include <iostream>
using namespace std;

int duplicateNumber(int *arr, int size)
{
    //Write your code here
      for(int i=0;i<size;i++)
      {
          int count=0;
          for(int j=0;j<size;j++)
          {
          
              if(arr[i]==arr[j])
              {
                 count++;
              }
          }
          if(count==2)
              return arr[i];
      }
        
}

int main()
{

	
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << duplicateNumber(input, size) << endl;

	return 0;
}