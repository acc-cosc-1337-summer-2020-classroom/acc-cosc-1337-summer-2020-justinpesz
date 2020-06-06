#include "variables.h"
#include<iostream>
//#include<iomanip>

using namespace std;

int main()
{
	double meal_total = 0.00;
	double tip_percent = 0.00;

	cout<<"Enter meal total: $";
	cin>>meal_total;

	cout<<"Enter tip percentage: ";
	cin>>tip_percent;
	
	double result = get_sales_tax_amount(meal_total);
	double result2 = get_tip_amount(meal_total, tip_percent);

	cout<<"\nMeal Total: $"<<meal_total<<"\n";
	cout<<"Sales Tax: $"<<result<<"\n";
	cout<<"Tip applied: $"<<result2<<"\n";
	cout<<"Total: $"<<meal_total + result + result2;

	return 0;
}