//write include statements
#include "dna.h"
#include<iostream>
#include<string.h>
#include <sstream>
//write using statements
using std::cin; using std::cout;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	bool done = true;
	string choice;
	string dna;
	double dn;
	while (done)
	{
		cout<<"Enter a 1 for GC content %, or a 2 for DNA complement. If done, type Y or y\n";
		cin>>choice;
		if(choice=="y" ||choice=="Y")
		{
			done=false;
		}
		else if(choice=="1")
		{
			cout<<"Please enter the DNA string in all caps\n";
			cin>>dna;
			dn= get_gc_content(dna);
			std::ostringstream strs;
			strs << dn;
			std::string str = strs.str();
			str+="\n";
			cout<<str;
		}
		else if(choice=="2")
		{
			cout<<"Please enter the DNA string in all caps\n";
			cin>>dna;
			dna= get_dna_complement(dna) + "\n";
			cout<<dna;
		}

	}
	return 0;
}