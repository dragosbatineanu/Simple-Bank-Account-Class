#include <iostream>
#include "BankAccount.h"
#include <string>

int main() {
	std::string name;
	int accountNumber;
	double balance;
	bool running = true;
	
	std::cout << "Enter your account name:" << '\n';
	std::cin >> name;
	std::cout << "Enter the initial balance:" << '\n';
	std::cin >> balance;

	BankAccount account(name, 121, balance);

	double depositAmount;
	std::cout << "Enter the amount you want to deposit:" << " " << '\n';
	std::cin >> depositAmount;
	account.deposit(depositAmount);

	double withdrawAmount;
	std::cout << "Enter the amount you want to withdraw:" << " " << '\n';
	std::cin >> withdrawAmount;
	account.withdraw(withdrawAmount);
	std::cout << "Current balance:" << account.getBalance() << '\n';

	std::cout << "-----------------------------------------------------------" << '\n';
	account.account();
}