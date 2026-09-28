#include "Account.hpp"

// Constructors
Account::Account(int inital_deposit)
{
	std::cout << "\e[0;33mDefault Constructor called of Account\e[0m" << std::endl;
}

Account::Account(const Account &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Account\e[0m" << std::endl;
}


// Destructor
Account::~Account()
{
	std::cout << "\e[0;31mDestructor called of Account\e[0m" << std::endl;
}


// Operators
Account & Account::operator=(const Account &assign)
{
	(void) assign;
	return *this;
}

