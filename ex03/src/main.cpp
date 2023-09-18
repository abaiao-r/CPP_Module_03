/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:46:28 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/18 22:34:00 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main(void)
{
    // Claptrap
    ClapTrap claptrap("Claptrap");
    ClapTrap claptrap2("Enemy");

    std::cout << "Display stats:" << std::endl;
    claptrap2.displayStats();
    claptrap.displayStats();

    std::cout << "\n\n\nRound 1:" << std::endl;
    claptrap.attack(claptrap2.getName());
    claptrap2.takeDamage(claptrap.getAttackDamage());
    
    claptrap2.displayStats();
    claptrap.displayStats();

    std::cout << "\n\n\nRound 2:" << std::endl;
    for (int i = 0; i < 12; i++)
    {
        claptrap2.attack(claptrap.getName());
        claptrap.takeDamage(claptrap2.getAttackDamage());
    }
    claptrap2.displayStats();
    claptrap.displayStats();

    std::cout << "\n\n\nRound 3:" << std::endl;
    claptrap.beRepaired(1);
    claptrap2.beRepaired(1);


    claptrap2.displayStats();
    claptrap.displayStats();

    std::cout << "\n\n\nExperimental round:" << std::endl;
    claptrap2.takeDamage(200);

    claptrap2.displayStats();
    claptrap.displayStats();

    ScavTrap scavtrap("Scavtrap");
    ScavTrap scavtrap2("Enemy");
    

    // Scavtrap
    std::cout << "Display stats:" << std::endl;
    scavtrap2.displayStats();
    scavtrap.displayStats();

    std::cout << "\n\n\nRound 1:" << std::endl;
    scavtrap.attack(scavtrap2.getName());
    scavtrap2.takeDamage(scavtrap.getAttackDamage());
    scavtrap2.displayStats();
    scavtrap.displayStats();

    std::cout << "\n\n\nRound 2:" << std::endl;
    for (int i = 0; i < 12; i++)
    {
        scavtrap2.attack(scavtrap.getName());
        scavtrap.takeDamage(scavtrap2.getAttackDamage());
    }
    scavtrap2.displayStats();
    scavtrap.displayStats();

    std::cout << "\n\n\nRound 3:" << std::endl;
    scavtrap.beRepaired(1);
    scavtrap2.beRepaired(1);
    scavtrap2.guardGate();

    std::cout << "\n\n\nExperimental round:" << std::endl;
    scavtrap2.takeDamage(200);

    scavtrap2.displayStats();
    scavtrap.displayStats();

    //fragTrap
    FragTrap fragTrap("fragTrap");
    FragTrap fragTrap2("Enemy");
    


    std::cout << "Display stats:" << std::endl;
    fragTrap2.displayStats();
    fragTrap.displayStats();

    std::cout << "\n\n\nRound 1:" << std::endl;
    fragTrap.attack(fragTrap2.getName());
    fragTrap2.takeDamage(fragTrap.getAttackDamage());
    fragTrap2.displayStats();
    fragTrap.displayStats();

    std::cout << "\n\n\nRound 2:" << std::endl;
    for (int i = 0; i < 12; i++)
    {
        fragTrap2.attack(fragTrap.getName());
        fragTrap.takeDamage(fragTrap2.getAttackDamage());
    }
    fragTrap2.displayStats();
    fragTrap.displayStats();

    std::cout << "\n\n\nRound 3:" << std::endl;
    fragTrap.beRepaired(1);
    fragTrap2.beRepaired(1);
    fragTrap2.highFivesGuys();

    std::cout << "\n\n\nExperimental round:" << std::endl;
    fragTrap2.takeDamage(200);

    fragTrap2.displayStats();
    fragTrap.displayStats();

    //DiamondTrap
    DiamondTrap diamondTrap("DiamondTrap");
    DiamondTrap diamondTrap2("Enemy");

    std::cout << "Display stats:" << std::endl;
    diamondTrap2.displayStats();
    diamondTrap.displayStats();

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
    diamondTrap2.takeDamage(200);

    diamondTrap2.displayStats();
    diamondTrap.displayStats();

    return (0);
}





