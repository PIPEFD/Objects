/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:59:36 by dbonilla          #+#    #+#             */
/*   Updated: 2026/09/30 11:12:27 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bank.hpp"
#include "Account.hpp"
#include <iostream>


int main (void)
{
    int id1;

    Bank bank;
    
    id1 =  bank.create_account(100);
    
    std::cout << id1 << "\n";
    const Account& acc1 =  bank[id1];

    std::cout << "\nGet information about first account:    " << acc1.getId() << "\nAmount:   " << \
        acc1.getValue();
    
}
