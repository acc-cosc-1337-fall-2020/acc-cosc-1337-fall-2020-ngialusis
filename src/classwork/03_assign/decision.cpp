//cpp
#include "decision.h"
#include<string>
//write include statement for decisions header

//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1
int get_grade_points(std::string letter_grade)
{
	if (letter_grade == "A") 
	{
		return 4;
	}
	else if(letter_grade == "B") 
	{
		return 3;
	}
	else if (letter_grade == "C")
	{
		return 2;
	}
	else if (letter_grade == "D")
	{
		return 1;
	}
	else if (letter_grade == "F")
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}
string get_letter_grade_using_if(int grade)
{	
	if(grade>100)
	{
		return "number out of range";
	}
	else if (grade >=90) 
	{
		return "A";
	}
	else if(grade >=80) 
	{
		return "B";
	}
	else if (grade >=70)
	{
		return "C";
	}
	else if (grade >=60)
	{
		return "D";
	}
	else if (grade >=0)
	{
		return "F";
	}
	else 
	{
		return "number out of range";
	}
	
}


string get_letter_grade_using_switch(int grade)
{	
	
	grade = grade / 10;
	switch(grade)
	{
		case 10:
		{
			return "A";
		}
		case 9:
		{
			return "A";
		}
		case 8:
		{
			return "B";
		}
		case 7:
		{
			return "C";
		}
		case 6:
		{
			return "D";
		}
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:			
			return "F";
		case -1:
		{
			return "number out of range";
		}
	}
}

