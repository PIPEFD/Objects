/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:59:33 by dbonilla          #+#    #+#             */
/*   Updated: 2026/09/30 11:50:07 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bank.hpp"
#include <utility>

size_t  Bank::account_id  = 0;

// Constructors
Bank::Bank(): liquidity(0), fee(5)
{
	std::cout << "\e[0;33mDefault Constructor called of Bank\e[0m" << std::endl;
}

// Bank::Bank(int _liquidity, int _fee)
// {
    
// }


Bank::Bank(const Bank &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Bank\e[0m" << std::endl;
}


// Destructor
Bank::~Bank()
{
	std::cout << "\e[0;31mDestructor called of Bank\e[0m" << std::endl;
}


// Operators
Bank& Bank::operator=(const Bank &rhs)
{
    if(this ==  &rhs)
        return (*this);
    
    for (std::map< int, Account*>::const_iterator it = clientsAccounts.begin(); it != clientsAccounts.end();  it++)
        delete it->second;
    this->clientsAccounts.clear();

    this->liquidity =  rhs.liquidity;
    for(std::map<int, Account*>:: const_iterator it =  rhs.clientsAccounts.begin(); it != rhs.clientsAccounts.end(); ++it)
        this->clientsAccounts.insert(std::pair<int, Account*>(it->first, new Account(*(it->second))));
	
    return (*this);
}


// Metodos Publicos

int Bank::create_account(int initial_amount)
{
    int percentage = 100;
    std::cout << "initial amount:   " << initial_amount;

    if (initial_amount < 0)
        std::cout << "Can't create account with negative value";
    
    this->liquidity += (initial_amount * getFee()) / percentage;
    std::cout << "\nliquidity:   " << this->liquidity << "\n" ;
    initial_amount -= (initial_amount *  getFee()) / percentage;
    this->clientsAccounts.insert(std::pair<int, Account*>(account_id, new Account(account_id, initial_amount)));
    account_id++;

    return (account_id - 1);   
}

// Getters

const int& Bank::getFee() const
{
    return (this->fee);
}

const int& Bank::getLiquidity() const
{
    return (this->liquidity);
}

// Setters

void Bank::setLiquidity(int liquidity)
{
    this->liquidity =  liquidity;
}


// Operadores de Carga

const Account& Bank::operator[](size_t idAccount)
{
    std::map<int, Account*>::iterator it;

    if ((it = clientsAccounts.find(idAccount) == clientsAccounts.end()))
    {
        
    }
    
}
