/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:22:55 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/20 18:33:41 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
    this->_name = "Default_diamond_name";
    this->setName(this->_name + "_clap_name");
    this->setHitPoints(FragTrap::HIT_POINTS);
    this->setEnergyPoints(ScavTrap::ENERGY_POINTS);
    this->setAttackDamage(FragTrap::ATTACK_DAMAGE);

    std::cout << BOLDCYAN << "DiamondTrap " << this->getName() 
        << " default constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    this->setHitPoints(FragTrap::HIT_POINTS);
    this->setEnergyPoints(ScavTrap::ENERGY_POINTS);
    this->setAttackDamage(FragTrap::ATTACK_DAMAGE);
    std::cout << BOLDCYAN << this->getName() 
        << " DiamondTrap parameter constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
    std::cout << BOLDCYAN << "DiamondTrap " << this->getName() 
        << " copy constructor called" << RESET << std::endl;
    *this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
    std::cout << BOLDCYAN << "DiamondTrap " << this->getName() 
        << " assignation operator called" << RESET << std::endl;
    if (this != &src)
    {
        this->_name = src._name;
        this->_hit_points = src._hit_points;
        this->_energy_points = src._energy_points;
        this->_attack_damage = src._attack_damage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << BOLDCYAN << "DiamondTrap " << this->_name 
        << " destructor called" << RESET << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << BOLDBLUE << "I am " << this->_name << " and my ClapTrap name is " 
        << ClapTrap::getName() << RESET << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    this->ScavTrap::attack(target);
}

void DiamondTrap::displayStats(void)
{
    std::cout << BOLDBLUE << "DiamondTrap " << this->_name << " has " 
        << this->getHitPoints()  << " hit points, " << this->getEnergyPoints() 
        << " energy points and " << this->getAttackDamage() << " attack damage."
        << RESET << std::endl;
}






