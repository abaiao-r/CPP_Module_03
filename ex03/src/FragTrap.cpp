/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:19:39 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/20 18:29:37 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

const int FragTrap::HIT_POINTS = 100;
const int FragTrap::ENERGY_POINTS = 100;
const int FragTrap::ATTACK_DAMAGE = 30;

FragTrap::FragTrap(void) : ClapTrap("Default")
{
    std::cout << BOLDCYAN << "Fragtrap " << this->getName() 
        << " default constructor called" << RESET << std::endl;
    this->setHitPoints(FragTrap::HIT_POINTS);
    this->setEnergyPoints(FragTrap::ENERGY_POINTS);
    this->setAttackDamage(FragTrap::ATTACK_DAMAGE);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << BOLDCYAN << "Fragtrap " << this->getName() 
        << " parameter constructor called" << RESET << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::~FragTrap(void)
{
    std::cout << BOLDCYAN << "FragTrap " << this->getName() 
        << " destructor called" << RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
    std::cout << BOLDCYAN << "FragTrap " << this->getName() 
        << " copy constructor called" << RESET << std::endl;
    *this = src;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
    std::cout << BOLDCYAN << "FragTrap " << this->getName() 
        << " assignation operator called" << RESET << std::endl;
    if (this != &src)
    {
        ClapTrap::operator=(src);
    }
    return (*this);
}

void FragTrap::attack(const std::string &target)
{
    if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
    {
        std::cout << BOLDYELLOW << "FragTrap " << this->getName() << " attacks " 
            << target << ", causing " << this->getAttackDamage() 
            << " points of damage!" << RESET << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);

    }
    else if (this->getHitPoints() <= 0)
    {
        std::cout << BOLDMAGENTA << "FragTrap " << this->getName()
            << " can't attack " << target << " because it's dead!" << RESET 
            << std::endl;
    }
    else
    {
        std::cout << BOLDMAGENTA << "FragTrap " << this->getName()
            << " can't attack " << target 
            << " because it has no energy points!" << RESET << std::endl;
    }

}

void FragTrap::highFivesGuys(void)
{
    std::cout << BOLDCYAN << "FragTrap " << this->getName() 
        << " high fives" << RESET << std::endl;
}

void FragTrap::displayStats(void)
{
    std::cout << BOLDBLUE << "FragTrap " << this->getName() << " has " 
        << this->getHitPoints() << " hit points, " << this->getEnergyPoints() 
        << " energy points and " << this->getAttackDamage() << " attack damage."
        << RESET << std::endl;
}