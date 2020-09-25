//Write the include statement for decisions.h here
#include "decision.h"
#include<iostream>
#include<string>
//Write namespace using statements for cout and cin
using std::cout; using std::cin; using std::string;
int main() 
{
	int grade = 0;
	cout<<"Grade? (int)";
	cin>>grade;
	cout<<"\n"<<get_letter_grade_using_if(grade)<<"\n";
	cout<<get_letter_grade_using_switch(grade)<<"\n";
	return grade;
}

