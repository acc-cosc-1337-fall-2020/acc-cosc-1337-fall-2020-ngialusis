#include<iostream>
#include "switch.h"
using std::cout;  using std::cin;
int main() 
{

	int option;
	cout<<("Enter option");
	cin>>option;
	std::string result = menu(option);
	cout<<"\n"<<result;
	return 0;
}