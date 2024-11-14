#include <iostream>
#include "BankAccount.h"

void BankAccount()
{
	balance = 7200;
	owner = "Jan Kowalski";
	currency = "z³";
}

void BankAccount(double b, std::string o, std::string c)
{
	//balance = b;
	SetBalance(b);
	owner = o;
	currency = c;
};

void BankAccount::SetBalance(double b)
{
	if (b >= 0
		&& isSetBalanceExecute == false)
	{
		balance = b;
		isSetBalanceExecute = true;
	}
}

double BankAccount::GetBalance()
{
	//instrukcje zabezpieczaj¹ce
	return balance;
}

void BankAccount::AccountInformation()
{
	std::cout << "Informacja o koncie bankowym\n";
	std::cout << "W?a?ciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n";
}

void BankAccount::DepositToAccount(double amount)
{
	if (amount >= 0)
		balance = balance + amount;
}

bool BankAccount::WithdrawalFromAccount(double amount)
{
	if (amount >= 0
		&& balance >= amount)
	{
		balance = balance - amount;
		return true;
	}

	return false;
}

void BankAccount::TransferBetweenAccounts(BankAccount& targetAcccount, double amount)
{
	if (WithdrawalFromAccount(amount))
		targetAcccount.DepositToAccount(amount);

}