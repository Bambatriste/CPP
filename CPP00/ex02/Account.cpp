#include "Account.hpp"

Account::Account(int initial_deposit)
{
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    this->_totalNbDeposits++;
}

Account::Account()
{
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    this->_amount = 0;
}

Account::~Account()
{

}

int Account::getNbAccounts( void )
{
    return(Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return(Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return(Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{

}

void	Account::makeDeposit( int deposit )
{

}

bool	Account::makeWithdrawal( int withdrawal )
{

}
int		Account::checkAmount( void ) const
{

}
void	Account::displayStatus( void ) const
{

}

void	Account::_displayTimestamp( void )
{

}