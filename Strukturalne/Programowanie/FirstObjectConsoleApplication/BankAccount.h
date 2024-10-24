#pragma once

class BankAccount
{
private:
	double balance;
	std::string owner;
	std::string currency;
public:
	void AccountInformation();
	void DepositToAccount(double amount);
	bool WithdrawalFromAccount(double amount);
	void TransferBetweenAccounts(BankAccount& targetAccount, double amount);
};
