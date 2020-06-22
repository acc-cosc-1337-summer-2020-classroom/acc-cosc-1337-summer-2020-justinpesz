#include "dna.h"
#include<iostream>
#include<string>
//write include statements
using std::cin;
using std::cout;
using std::string;
//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int num = 0;

	do
	{
		string content = "AGCTATAG";
		//int size = content.size();
		//cout<<size;

		cout<<"Enter 1 for Content or 2 for Complement: ";
		cin>>num;

		if (num == 1)
		{
			cout<<"Entered "<<num;
			//double result = get_gc_content(content);

			//cout << result;		
		}
		else if (num == 2)
		{
			cout<<"Entered "<<num;
			//get_dna_complement(string content);
		}
		else
		{
			cout<<"Invalid selection\n";
		}
	}while (!(num == 1 || num == 2));

	return 0;
}