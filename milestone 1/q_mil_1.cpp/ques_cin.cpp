#include<iostream>
using namespace std;

int main()
{ char c;
 c=cin.get();
  int count_of_characters=0, count_of_digits=0, count_of_whitespaces=0;
    
  while(c!='$')
  {
     if(int(c)>=97&&int(c)<=122)
     { 
         c=cin.get();
        count_of_characters++; 
     }
      
     else if(int(c)>=48&&int(c)<=57)
     {
         c=cin.get();
        count_of_digits++; 
     }
       else
     {
        c=cin.get();
        count_of_whitespaces++; 
     }
  }
 cout<<count_of_characters<<" "<<count_of_digits<<" "<<count_of_whitespaces<<" ";
 return 0;
}


