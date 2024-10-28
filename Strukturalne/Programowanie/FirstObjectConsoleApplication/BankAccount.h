#pragma once

class BankAccount
{
private:
	double balance;
	std::string owner;
	std::string currency;

	void SetBalance(double b);
public:
	bool isSetBalanceExecute = false;

	double GetBalance();

	void AccountInformation();

	void DepositToAccount(double amount);
	bool WithdrawalFromAccount(double amount);
	void TransferBetweenAccounts(BankAccount& targetAccount, double amount);
};
