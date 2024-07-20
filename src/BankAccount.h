#pragma once
#include <iostream>
#include <string>

class BankAccount {
	private:
		std::string accountHolderName;
		int accountNumber;
		double balance;

	public:
		BankAccount(std::string name, int number, double initialBalance) {
			accountHolderName = name;
			accountNumber = number;
			balance = initialBalance;
		}

		void deposit(double amount) {
			balance += amount;
		}

		void withdraw(double amount) {
			balance -= amount;
		}

		double getBalance() {
			return balance;
		}

		void account() {
			std::cout << "Name:" << " " << accountHolderName << '\n';
			std::cout << "Account number:" << " " << accountNumber << '\n';
			std::cout << "Balance:" << " " << balance << '\n';
		}
};