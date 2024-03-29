/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:46:28 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/20 19:39:29 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main(void)
{
    //ClapTrap
    ClapTrap clapTrap("ClapTrap");
    
    //ScavTrap
    ScavTrap scavTrap("ScavTrap");

    //FragTrap
    FragTrap fragTrap("FragTrap");

    //DiamondTrap
    DiamondTrap diamondTrap("DiamondTrap");
    DiamondTrap diamondTrap2("Enemy");
    //copy constructor
    DiamondTrap diamondTrap4(diamondTrap2);


    std::cout << "Display stats:" << std::endl;
    clapTrap.displayStats();
    scavTrap.displayStats();
    fragTrap.displayStats();
    diamondTrap2.displayStats();
    diamondTrap.displayStats();
    diamondTrap4.displayStats();


    std::cout << "\n\n\nRound 1:" << std::endl;
    diamondTrap.attack(diamondTrap2.getName());
    diamondTrap2.takeDamage(diamondTrap.getAttackDamage());
    diamondTrap2.displayStats();
    diamondTrap.displayStats();

    std::cout << "\n\n\nRound 2:" << std::endl;
    for (int i = 0; i < 12; i++)
    {
        diamondTrap2.attack(diamondTrap.getName());
        diamondTrap.takeDamage(diamondTrap2.getAttackDamage());
    }
    diamondTrap2.displayStats();
    diamondTrap.displayStats();

    std::cout << "\n\n\nRound 3:" << std::endl;
    diamondTrap.beRepaired(1);
    diamondTrap2.beRepaired(1);
    diamondTrap2.whoAmI();

    std::cout << "\n\n\nExperimental round:" << std::endl;
    diamondTrap2.takeDamage(200);   //this is a ClapTrap method
    diamondTrap2.guardGate();       //this is a ScavTrap method
    diamondTrap2.highFivesGuys();   //this is a FragTrap method

    diamondTrap2.displayStats();
    diamondTrap.displayStats();

    return (0);
}





