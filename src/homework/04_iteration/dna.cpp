#include "dna.h"
#include<cmath>
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
    string copy = dna;
    double percent = 0.0;
    double count=0;
    double total=0;
    for(int i=0; i<dna.length();i++)
    {   
        if(copy[i] == 'C' || copy[i] == 'G')
        {
            count++;
        }
        total++;
    }
    percent= count/total;
    return percent;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    string reverse ="";
    for(int i=dna.length()-1; i>=0 ;i--)
    {
        reverse+=dna[i];
    }
    return reverse;
}



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
    string complement = "";
    for(int i=0; i<dna.length();i++)
    {   
        if(dna[i] =='C')
        {
           complement+='G';
        }
        else if(dna[i] =='G')
        {
           complement+='C';
        }
        else if(dna[i] =='A')
        {
           complement+='T';
        }
        else if(dna[i] =='T')
        {
           complement+='A';
        }
    }
    return get_reverse_string(complement);
}
