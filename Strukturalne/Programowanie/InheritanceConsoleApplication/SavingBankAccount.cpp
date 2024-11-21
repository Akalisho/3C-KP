#include <iostream>
#include "SavingBankAccount.h"

void SavingBankAccount::CalculateInterestRate()
{
	balance = balance + balance * interestRate;
}

void SavingBankAccount::AccountInformation()
{
	BankAccount::AccountInformation();
	std::cout << "Oprocentowanie: " << interestRate << "\n";
}