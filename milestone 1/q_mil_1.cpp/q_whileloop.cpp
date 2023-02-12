#include<iostream>
using namespace std;


int main()
{
int S,E,W,i;
float C;
cin >> S ;
cin >> E ;
cin >> W ;


while(S<=E)
 {  C=(S-32)*(5.0/9);
    cout<<S<<" "<<int(C)<<endl;
    
    S=S+W;
 }
    return 0;
    
}
