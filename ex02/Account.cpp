#include <iostream>
#include <Account.hpp>

//constructeur . Destructeur
Account::Account(int initial_deposit) {
	this->_accountIndex = 0;
	std::cout << "[" << _displayTimestamp << "] " << "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";" << "created" << std::endl;
	return;
}

Account::~Account(void) {
	
	return;
}



//fonctions
static int	Account::getNbAccounts( void ) {

}

static int	Account::getTotalAmount( void ) {

}

static int	Account::getNbDeposits( void ) {

}

static int	Account::getNbWithdrawals( void ) {

}

static void	Account::displayAccountsInfos( void ) {

}

void		Account::makeDeposit( int deposit ) {

}

bool		Account::makeWithdrawal( int withdrawal ) {

}

int		Account::checkAmount( void ) const {

}

void		Account::displayStatus(void) const {
		
}

static void	Account::_displayTimestamp(void) {

}


//conmstantes
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
