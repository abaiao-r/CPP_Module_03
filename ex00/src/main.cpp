/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:46:28 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/18 18:22:21 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
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
}





