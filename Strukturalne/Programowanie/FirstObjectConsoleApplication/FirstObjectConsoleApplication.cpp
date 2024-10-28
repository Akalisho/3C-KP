
#include <iostream>
#include "BankAccount.h"

int main()
{
	setlocale(LC_CTYPE, "polish");

	BankAccount firstAccount;
	//firstAccount.balance = 7200;
	firstAccount.SetBalance(7200);
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	//firstAccount.balance = 3200;
	secondAccount.SetBalance(3200);
	secondAccount.owner = "Ewa Nowak";
	secondAccount.currency = "z³";

	secondAccount.AccountInformation();

	firstAccount.DepositToAccount(100);
	firstAccount.AccountInformation();

	firstAccount.WithdrawalFromAccount(200);
	firstAccount.AccountInformation();

	firstAccount.TransferBetweenAccounts(secondAccount, 8100);

	firstAccount.AccountInformation();
	secondAccount.AccountInformation();
}