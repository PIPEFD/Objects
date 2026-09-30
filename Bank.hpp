#ifndef BANK_HPP
# define BANK_HPP

# include "Account.hpp"
# include <iostream>
# include <string>
# include <map>

class Bank
{
    private:

        int liquidity;
        int fee;
        static size_t account_id;
        std::map<int, Account*> clientsAccounts;
        // Constructors
        Bank(const Bank &copy);
        
        // Destructor
        
        // Operators
        Bank & operator=(const Bank &assign);
    public:
        
        Bank();
        Bank(int _liquidity, int fee);
        ~Bank();
        const Account& operator[](size_t);
        int         create_account(int initial_ammount);
        const int&  getFee() const;
        const int&  getLiquidity() const;
        void        setLiquidity(int);


		
};

#endif