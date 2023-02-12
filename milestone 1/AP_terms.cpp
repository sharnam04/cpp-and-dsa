#include<iostream>
using namespace std;//Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.

int main() 
{   
	int n;// number of terms in series
    cin>>n;
    int count =0;
    int num;
    
         for( int i=1;count<=n;i++)
          
         { 
             num=(3*i)+2; 
            if(num%4==0)
          {
            continue;
          }
          cout<<num<<" ";
          count ++;
         }
    
   
	return 0;
}

