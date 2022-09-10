#include "Conta.h"
#include <iostream>
#include <string>
#include "D:\Programming\Projects\BankAccount\Conta.h"


bool Account::Withdraw(double Amount)
{

	if (Balance < Amount)
	{
		std::cout << "Non-Sufficient Funds!\n";
		std::cout << "Your current balance is: " << "$" << CheckBalance() << "\n";
		
		return false;
	}
	else
	{
		Balance -= Amount;
		std::cout << "Your current balance is: " << "$" << CheckBalance() << "\n";

		return true;
	}
}

void Account::Deposit(double Amount)
{

	Balance += Amount;
	std::cout << "\n$" << Amount << "is being deposited. \nOperation Successful!";

}

void Account::Mtransfer(Account Destination, double Amount)
{
	if (Balance < Amount)
	{
		std::cout << "Non-Sufficient Funds!\n";
	}
	else
	{
		Destination.Deposit(Amount);
		Balance -= Amount;
		std::cout << "\n******Account Details*****\n";
		std::cout << "Account Holder: " << Destination.GetAccountHolder() << "\n";
		std::cout << "Bank: " << Destination.GetBank() << "\n";
		std::cout << "Branch: " << Destination.GetBranch() << "\n";
		std::cout << "Account: " << Destination.GetAccNumber() << "\n";
		std::cout << "Operation Successful!";
	}
}

double Account::CheckBalance()
{
	return Balance;
}

std::string Account::GetBank()
{
	return Bank;
}


int Account::GetBranch()
{
	return Branch;
}

std::string Account::GetAccountHolder()
{
	return AccountHolder;
}

void Account::SetBank(std::string Bank)
{
	Bank = Bank;

}