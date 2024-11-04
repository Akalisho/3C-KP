#pragma once

class BankAccount
{
private:
	double balance;
	std::string owner;
	std::string currency;

	bool isSetBalanceExecute = false;
public:
	//BankAccount();

	BankAccount(double b, std::string o, std::string c);

	double GetBalance();
	void SetBalance(double b);

	void AccountInformation();

	void DepositToAccount(double amount);
	bool WithdrawalFromAccount(double amount);
	void TransferBetweenAccounts(BankAccount& targetAccount, double amount);
};
