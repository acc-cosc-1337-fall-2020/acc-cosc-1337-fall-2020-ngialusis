//write includes statements
#include<string>
#include<iostream>
#include "loops.h"
//write using statements for cin and cout
using std::cin; using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{	
	int fact=0;
	bool y = true;
	do
	{
		cout<<"Provide an integer 1-20. \n";
		cin>>fact;
		if(fact<=20 && fact>=1)
		{
			y=false;
		}
		else
		{
			cout<<"Number not valid. \n";
		}
		
		
	} while (y);
	int ans = factorial(fact);	
	cout<<ans<<"\n";
	return ans;
}