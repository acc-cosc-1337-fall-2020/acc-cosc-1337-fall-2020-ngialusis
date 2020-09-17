//write include statements
#include<iostream>
#include "variables.h"
#include<cmath>
//write namespace using statement for cout
using std::cout; using std::cin; 
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	cout<<"Meal Amount? (double)";
	double meal_amount;
	cin>>meal_amount;
	cout<<"Tip %? (double)";
	double tip;
	cin>>tip;
	tip=tip/100;
	double total=meal_amount;
	double sales_tax= get_sales_tax_amount(meal_amount);
	double tip_amount= get_tip_amount(meal_amount, tip);
	total = meal_amount+tip_amount+sales_tax;
	total= (std::ceil(total*100))/100;
	cout<<" Meal Amount: "<<meal_amount<<"\n Sales Tax: "<<sales_tax<<"\n Tip Amount: "<<tip_amount<<"\n Total: "<<total;
	return total;
}
