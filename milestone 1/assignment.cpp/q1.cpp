#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int basic;
    char grade;
    cin>>basic>>grade;
    
    float hra,da,allow,pf,ts;
    
    hra=(20.0/100)*(basic);
    da =(50.0/100)*(basic);
    pf =(11.0/100)*(basic);
    
    if (int(grade)==65)
    {
        allow=1700;
    }
    else if (int(grade)==66)
    {
        allow=1500;
    }
     else 
    {
        allow=1300;
    }
	ts=(basic+hra+da+allow-pf);
    
    
        cout<<int(round(ts));
    
    return 0;
}

