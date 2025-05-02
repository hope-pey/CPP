#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//constructer
Account::Account(int initial_deposit) :
    _accountIndex(_nbAccounts),
    _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;

}

//destructor
Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";closed" << std::endl;
}




int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
            << ";total:" << _totalAmount
            << ";diposits:" << _totalNbDeposits
            << ";withrawals:" << _totalNbWithdrawals << std::endl;
}


void	Account::makeDeposit( int deposit )
{
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";p_amount:" << _amount
    << ";diposit:" << deposit
    << ";amount:" << _amount + deposit
    << ";nb_diposits:" << _nbDeposits << std::endl;
    _totalAmount += deposit;
    _amount += deposit;
    _nbDeposits++;
}

// int		Account::checkAmount( void ) const
// {
// }

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";p_amount:" << _amount
    << ";withrawal:";
    if (_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    std::cout << withdrawal
    << ";amount:" << _amount
    << ";nb_withrawals:" << _nbWithdrawals << std::endl;
    _nbWithdrawals++;
    return (true);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
            << ";amount:" << _amount
            << ";diposits:" << _nbDeposits
            << ";withrawals:" << _nbWithdrawals << std::endl;
}
void	Account::_displayTimestamp( void )
{
    std::time_t curr;
    std::tm *time;

    curr = std::time(NULL);
    time = std::localtime(&curr);

    std::cout << "["
            << 1900 + time->tm_year
            << std::setw(2) << std::setfill('0') << time->tm_mon + 1
            << std::setw(2) << std::setfill('0') << time->tm_mday
            << "_"
            << std::setw(2) << std::setfill('0') << time->tm_hour
            << std::setw(2) << std::setfill('0') << time->tm_min
            << std::setw(2) << std::setfill('0') << time->tm_sec
            << "] ";
}
