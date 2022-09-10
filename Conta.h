#pragma once
#include<iostream>
#include<string>

class Account
{
	
private:

	std::string Bank;
	std::string AccountHolder;
	int Branch;
	int AccNum;
	double Balance;

public:

	bool Withdraw(double Amount);
	void Deposit(double Amount);
	void Mtransfer(Account& Destination, double Amount);
	double CheckBalance();
	int GetBranch();
	int GetAccNumber();
	std::string GetBank();
	std::string AccountHolder();
	void SetBank(std::string Bank);
	void SetBranch(int Branch);
	void SetAccountHolder(std::string AccountHolder);
	
};