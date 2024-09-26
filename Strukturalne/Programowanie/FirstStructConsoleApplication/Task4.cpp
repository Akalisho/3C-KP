#include <iostream>

struct bankAccount
{
	double balance;
	std::string owner;
	std::string currency;
};

void accountInformation(bankAccount account)
{
	std::cout << "Informacja o koncie bankowym: \n";
	std::cout << "W³aœciciel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << "\n";
}

void depositToAccount(bankAccount& account, double amount)
{
	if (amount > 0 && account.balance >= amount)
		account.balance = account.balance + amount;
}

void withdrawalToAccount(bankAccount& account, double amount)
{
	if (amount > 0 && account.balance >= amount)
		account.balance = account.balance - amount;
}

void task4()
{
	bankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	accountInformation(firstAccount);

	bankAccount secondAccount;
	firstAccount.balance = 3200;
	firstAccount.owner = "Ewa Nowak";
	firstAccount.currency = "z³";

	accountInformation(secondAccount);

	depositToAccount(firstAccount, 100);
	accountInformation(firstAccount);

	withdrawalToAccount(firstAccount, 200);
	accountInformation(firstAccount);
}
