//Write the include statement for types.h here

//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>
#include "types.h"

using std::cin; using std::cout;

int main() 
{
	int num;
	cin>>num;
	int result= multiply_numbers(num);
	cout<<result;
	int num1 = 4;
	result= multiply_numbers(num1);
	cout<<"\n"<<result;
	return 0;
}

