#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

using namespace std;

class ATMmachine {
public:
	ATMmachine(int b = 1000) {
		balance = b;
	}
	~ATMmachine() {};

	// Deposit
	void deposit() {
		cout << "Cash or Check?" << '\n';
		string dummy;
		int cash, check;
		cin >> dummy;
		if (dummy == "Cash" || dummy == "cash") {
			cout << "How much would you like to deposit?" << '\n';
			cin >> cash;
			if (cash <= 100) {
				balance += cash;
				cout << "Deposit accepted. Your current balance is now $" << balance << "." << "\n-----\n";
			}
			else {
				cout << "Error. Cash deposit cannot exceed $100. Please enter a valid amount." << "\n-----\n";
			}
		}
		else
		{
			cout << "How much would you like to deposit?" << '\n';
			cin >> check;
			balance += check;
			cout << "Deposit accepted. Your current balance is now $" << balance << "." << "\n-----\n";
		}
	}
	// Withdrawal
	void withdrawal() {
		cout << "How much would you like to withdraw?" << '\n';
		int draw;
		cin >> draw;
		if (draw > 200) {
			cout << "Error: withdrawal cannot exceed $200. Please try again." << "\n-----\n";
		}
		else if (draw % 20 != 0) {
			cout << "Error: withdrawal must be a multiple of $20. Please try again." << "\n-----\n";
		}
		else if (draw > balance) {
			cout << "You have insufficient funds. Balance: $" << balance << " Attempted: $" << draw << ". Please try again." << " \n-----\n";
		}
		else {
			balance -= draw;
			cout << "Withdrawal processed. Your current balance is now $" << balance << "." << "\n-----\n";
		}
	}
	// Check Balance
	void check_balance() {
		cout << "Current Balance: $" << balance << "\n-----\n";
	}
	
private:
	int balance;
};

int main() {
	ATMmachine atm(1000);

	string user;
	int choose;
	
	cout << "Welcome!" << '\n';

	while (user != "no") {
		cout << "What would you like to do? deposit(1), withdraw(2), view balance(3), or exit(0)" << '\n';
		cin >> choose;
		switch (choose) {
		case 0: user = "no";
			break;
		case 1: atm.deposit();
			break;
		case 2: atm.withdrawal();
			break;
		case 3: atm.check_balance();
			break;
		default: user = "no";
		}
	}
	cout << "Your "; atm.check_balance();
	cout << "Thank you for your business!" << '\n';
	

	// Hold CMD open
	cin.get();
	cin.get();
	cout << "Press any button to end...";

}
