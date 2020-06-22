#include "dna.h"
#include<string>
#include<iostream>

using std::string;
using std::cout;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& content)
{
    int count = 0;
    int value = 0;
    int size = content.size();

    do
    {
        if (content[value] == 'G' || 'C')
        {
            count += 1;
            //cout<<count;      
        }
        value++;
    }while (value < size);
     
    //cout<<count;

    double result = count / size;

    return result;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

