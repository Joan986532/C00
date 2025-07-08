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
	std::cout << "amount:" << checkAmount() << ";";
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
int	Account::getNbAccounts( void ) {

	std::cout << "accounts:" << _nbAccounts << ";";
	return (0);
}

int	Account::getTotalAmount( void ) {
	std::cout << "total:" << _totalAmount << ";";	
	return (0);
}

int	Account::getNbDeposits( void ) {

	std::cout << "deposits:" << _totalNbDeposits << ";";
	return (0);
}

int	Account::getNbWithdrawals( void ) {

	std::cout << "withdrawals:" << _totalNbWithdrawals;
	return (0);
}

void	Account::displayAccountsInfos( void ) {
	
	_displayTimestamp();
	getNbAccounts();
	getTotalAmount();
	getNbDeposits();
	getNbWithdrawals();
	std::cout << std::endl;
}

void		Account::makeDeposit( int deposit ) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << checkAmount() << ";";
	_nbDeposits += 1;
	std::cout << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
	_totalNbDeposits += _nbDeposits;
}

bool		Account::makeWithdrawal( int withdrawal ) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (1);
	}
	else
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount" << checkAmount() << ";";
		_nbWithdrawals += 1;
		std::cout << "nb_withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;
		_totalNbWithdrawals += _nbWithdrawals;
	}
	return (0);
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void		Account::displayStatus(void) const {
	
	_displayTimestamp();
	// getTotalAmount();
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
