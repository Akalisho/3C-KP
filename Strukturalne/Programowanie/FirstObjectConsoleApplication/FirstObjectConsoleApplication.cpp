
#include <iostream>

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;
	void AccountInformation(BankAccount account)
	{
		std::cout << "Informacja o koncie bankowym: \n";
		std::cout << "W³aœciciel: " << account.owner << "\n";
		std::cout << "Saldo: " << account.balance << " " << account.currency << "\n";
	}

	void DepositToAccount(double amount)
	{
		if (amount > 0)
			balance = balance + amount;
	}

	bool WithdrawalFromAccount(double amount)
	{
		if (amount > 0 && balance >= amount)
		{
			balance = balance - amount;
			return true;
		}
		return false;
	}
};

void transferBetweenAccounts(BankAccount& sourceAccount, BankAccount& targetAccount, double amount)
{
	if (sourceAccount.WithdrawalFromAccount(amount))
		targetAccount.DepositToAccount(amount);
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	BankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	firstAccount.balance = 3200;
	firstAccount.owner = "Ewa Nowak";
	firstAccount.currency = "z³";

	secondAccount.AccountInformation();

	firstAccount.DepositToAccount(100);
	firstAccount.AccountInformation();

	firstAccount.WithdrawalFromAccount(200);
	firstAccount.AccountInformation();
}