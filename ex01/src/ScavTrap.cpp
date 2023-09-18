/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:22:25 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/18 18:46:14 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default")
{
    std::cout << BOLDCYAN << this->getName() 
        << " ScavTrap default constructor called" << RESET << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << BOLDCYAN << this->getName() 
        << " ScavTrap parameter constructor called" << RESET << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << BOLDCYAN << "ScavTrapp " << this->getName() 
        << " destructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    std::cout << BOLDCYAN << "ScavTrapp " << this->getName() 
        << " copy constructor called" << RESET << std::endl;
    *this = src;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
    std::cout << BOLDCYAN << "ScavTrapp " << this->getName() 
        << " assignation operator called" << RESET << std::endl;
    if (this != &src)
    {
        ClapTrap::operator=(src);
    }
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
    {
        std::cout << BOLDYELLOW << "ScavTrap " << this->getName() << " attacks " 
            << target << ", causing " << this->getAttackDamage() 
            << " points of damage!" << RESET << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);

    }
    else if (this->getHitPoints() <= 0)
    {
        std::cout << BOLDMAGENTA << "Scavtrap " << this->getName()
            << " can't attack " << target << " because it's dead!" << RESET 
            << std::endl;
    }
    else
    {
        std::cout << BOLDMAGENTA << "Scavtrap " << this->getName()
            << " can't attack " << target 
            << " because it has no energy points!" << RESET << std::endl;
    }

}

void ScavTrap::guardGate(void)
{
    std::cout << BOLDYELLOW << "ScavTrap " << this->getName() 
        << " has entered in Gate keeper mode" << RESET << std::endl;
}

void ScavTrap::displayStats(void)
{
    std::cout << BOLDBLUE << "Scavtrap " << this->getName() << " has " 
    << this->getHitPoints() << " hit points, " << this->getEnergyPoints() 
    << " energy points and " << this->getAttackDamage() << " attack damage."
    << RESET << std::endl;
}




