#include <iostream>
#include "BankAccount.h"

void BankAccount::AccountInformation(BankAccount account)
{
	std::cout << "Informacja o koncie bankowym: \n";
	std::cout << "W³aœciciel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << "\n";
}

void BankAccount::DepositToAccount(double amount)
{
	if (amount > 0)
		balance = balance + amount;
}

bool BankAccount::WithdrawalFromAccount(double amount)
{
	if (amount > 0 && balance >= amount)
	{
		balance = balance - amount;
		return true;
	}
	return false;
}

void BankAccount::ransferBetweenAccounts(BankAccount& sourceAccount, BankAccount& targetAccount, double amount)
{
	if (sourceAccount.WithdrawalFromAccount(amount))
		targetAccount.DepositToAccount(amount);
}