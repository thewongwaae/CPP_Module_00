#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// declared private to Account class, so initialise first
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
	char timeStr[50];
	
	std::time_t currentTime = std::time(nullptr);
	std::strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", std::localtime(&currentTime));
	std::cout << "[" << timeStr << "] " << std::flush;
}

Account::Account(int initial_deposit) {
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	this->_displayTimestamp();
	std::cout	<< "Index: " << _accountIndex << " | "
				<< "Amount: \033[0;33m" << _amount << "\033[0m | "
				<< "\033[0;32mCreated\033[0m" << std::endl;
}

Account::~Account(void) {
	_nbAccounts--;

	this->_displayTimestamp();
	std::cout	<< "Index: " << _accountIndex << " | "
				<< "Amount: \033[0;33m" << _amount << "\033[0m | "
				<< "\033[0;31mClosed\033[0m" << std::endl;
}

// to access private class info
int Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int Account::getTotalAmount( void ) {
    return _totalAmount;
}

int Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout	<< "Accounts: " << getNbAccounts() << " | "
				<< "Total: \033[0;33m" << getTotalAmount() << "\033[0m | "
				<< "Deposits: \033[0;32m" << getNbDeposits() << "\033[0m | "
				<< "Withdrawals: " << getNbWithdrawals() << "\n" << std::endl;
}

// account details (private info)
int     Account::checkAmount( void ) const {
    return _amount;
}

void Account::makeDeposit(int deposit) {
	this->_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout	<< "Index: " << _accountIndex << " | "
				<< "Amount: \033[0;33m" << _amount << "\033[0m | " << std::flush;
	_amount += deposit;
	std::cout	<< "Deposit: " << deposit << " | "
				<< "Amount: \033[0;33m" << _amount << "\033[0m | "
				<< "Deposits: "<< _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	this->_displayTimestamp();
	std::cout 	<< "Index: " << _accountIndex << " | "
				<< "Amount: \033[0;33m" << _amount << "\033[0m | "
				<< "Withdrawal: \033[0;31m" << std::flush;
	if (withdrawal > checkAmount()) {
		std::cout << "refused\033[0m" << std::endl;
		return false;
	}
	std::cout << withdrawal << "\033[0m | " << std::flush;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout 	<< "Amount: \033[0;33m" << _amount << "\033[0m | "
				<< "Deposits: " << _nbDeposits << std::endl;
	return true;
}

void Account::displayStatus(void) const {
	this->_displayTimestamp();
	std::cout	<< "Index: " << _accountIndex << " | "
				<< "Amount: \033[0;33m" << _amount << "\033[0m | "
				<< "Deposits: \033[0;32m" << _nbDeposits << "\033[0m | "
				<< "Withdrawals: \033[0;31m" << _nbWithdrawals << "\033[0m" << std::endl;
}
