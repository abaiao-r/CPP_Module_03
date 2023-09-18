/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:22:55 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/18 22:30:57 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;

    this->setName("Default");
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), 
    ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap parameter constructor called" << std::endl;

    this->setName(name);
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    if (this != &src)
    {
        ClapTrap::operator=(src);
    }
    return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
    if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
    {
        std::cout << "DiamondTrap " << this->getName() << " attacks " << target
            << ", causing " << this->getAttackDamage() << " points of damage!"
            << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
    else
    {
        std::cout << "DiamondTrap " << this->getName() << " can't attack "
            << target << " because it has no energy points or is dead!"
            << std::endl;
    }
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap " << this->getName() << " has ClapTrap name "
        << this->ClapTrap::getName() << std::endl;
}

void DiamondTrap::displayStats(void)
{
    std::cout << "DiamondTrap " << this->getName() << " has " 
        << this->getHitPoints() << " hit points, " 
        << this->getEnergyPoints() << " energy points and " 
        << this->getAttackDamage() << " attack damage" << std::endl;
}




