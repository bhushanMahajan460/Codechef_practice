
// HS08test
// ATM 

#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int withdraw ;
	float amount ; // input the parameters 
	cin>>withdraw>>amount ;
	
	if( withdraw + 0.5 > amount)
	{
	    cout << fixed << setprecision(2) << amount; // precision with two 
	}
	else if( withdraw%5!=0 )
	{
	    cout << fixed << setprecision(2) << amount;
	}
	else
	{
	    cout <<  fixed << setprecision(2) << amount - withdraw - 0.5 ;
	}
	
	return 0;
}
