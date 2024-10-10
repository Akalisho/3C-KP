#pragma once

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;
	void AccountInformation();
	void DepositToAccount(double amount);
	bool WithdrawalFromAccount(double amount);
	void TransferBetweenAccounts(BankAccount& targetAccount, double amount);
};
