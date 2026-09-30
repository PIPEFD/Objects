#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

# include <iostream>
# include <string>

class Bank;

class Account
{
    private:
        int id;
        int value;
        
		// Constructors
        
        Account(int id, int value);
        Account(const Account &copy);
        // Operators
        Account& operator=(const Account &assign);
        // Destructor
        friend class Bank;
        ~Account();
        
        public:
        
		const int& getId() const;
        const int& getValue () const;	
        const int& getTotalAmount() const;
        const int& displayAccountInfos() const;
		
};

#endif