#include <iostream>
#include <ctime>
#include "Account.hpp"


//constantes
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


//constructeur . Destructeur
Account::Account(int initial_deposit) {

	_nbAccounts += 1;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:"<< checkAmount() << ";";
	std::cout << "created" << std::endl;
	return;
}

Account::~Account(void) {
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "closed" << std::endl;
	return;
}


//fonctions
int	Account::getNbAccounts( void ) { return (_nbAccounts); }

int	Account::getTotalAmount( void ) { return (_totalAmount); }

int	Account::getNbDeposits( void ) { return (_totalNbDeposits); }

int	Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void	Account::displayAccountsInfos( void ) {
	
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}

void		Account::makeDeposit( int deposit ) {

	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << checkAmount() << ";";
	std::cout << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
	_totalNbDeposits++;
}

bool		Account::makeWithdrawal( int withdrawal ) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "withdrawal:";
	if (_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (1);
	}
	else
	{
		std::cout << withdrawal << ";";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << "amount:" << checkAmount() << ";";
		_nbWithdrawals++;
		std::cout << "nb_withdrawals:" << _nbWithdrawals << ";" << std::endl;
		_totalNbWithdrawals++;
		return (0);
	}
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void		Account::displayStatus(void) const {
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp(void) {
	
	time_t 		stime;
	struct tm	*timeinfos;
	char		buff[19];

	time (&stime);
	timeinfos = localtime (&stime);
	std::strftime(buff, 19, "[%Y%m%d_%H%M%S] ", timeinfos);
	std::cout << buff;
}
