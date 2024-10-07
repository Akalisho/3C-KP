#pragma once

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;

	void AccountInformation();

	void DepositToAccount();

	bool WithdrawalFromAccount();

	void transferBetweenAccounts();
};
