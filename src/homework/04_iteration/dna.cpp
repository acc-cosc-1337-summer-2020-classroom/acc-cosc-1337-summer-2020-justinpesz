#include "dna.h"
#include<string>
#include<iostream>
#include<iomanip>

using std::string;
using std::cout;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(string& content)
{
    double count = 0;
    int value = 0;
    int size = content.size();

    do
    {
        if (content[value] == 'C')
        {
            count += 1;   
        }
        else if (content[value] == 'G')
            count += 1;
        
        value++;
        
    }while (value < size);
     
    return count / size;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

/*string get_reverse_string(string forward)
{
    //int count = 0;
    //int size = content.size();

    char placeHolder = forward[0];
    forward.push_back() = placeHolder;

    cout << forward;

    return forward;
    //for (std::size_t i=0; i < forward.size(); i++)
}
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

string get_dna_complement(string complement)
{
    for (std::size_t i=0; i < complement.size(); i++)
    {
        if (complement[i] == 'A')
        {
            complement[i] = 'T';
        }
        else if (complement[i] == 'T')
        {
            complement[i] = 'A';
        }
        else if (complement[i] == 'G')
        {
            complement[i] = 'C';
        }
        else if (complement[1] == 'C')
        {
            complement[i] = 'G';
        }
    }
    return complement;
}