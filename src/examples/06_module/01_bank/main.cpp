#include "bank_account.h"
#  include<iostream>

using std::cout;
using std::cin;

int main()
{
	BankAccount account = get_account(1);
	cout<<account.get_bank_balance()<<"\n";

	return 0;
}