/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:47:08 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/18 18:38:04 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << BOLDCYAN << "ClapTrap default constructor called" << RESET 
        << std::endl;
    this->name = "Default";
    this->hit_points = 100;
    this->energy_points = 150;
    this->attack_damage = 20;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << BOLDCYAN << "ClapTrap parameter constructor called" << RESET 
        << std::endl;
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << BOLDCYAN << "ClapTrap destructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << BOLDCYAN << "ClapTrap copy constructor called" << RESET 
        << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
    std::cout << BOLDCYAN << "ClapTrap assignation operator called" << RESET << std::endl;
    if (this != &src)
    {
        this->name = src.name;
        this->hit_points = src.hit_points;
        this->energy_points = src.energy_points;
        this->attack_damage = src.attack_damage;
    }
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if (this->energy_points > 0 && this->hit_points > 0)
    {
        std::cout << BOLDYELLOW << "ClapTrap " << this->name << " attacks " 
            << target << ", causing " << this->attack_damage 
            << " points of damage!" << RESET << std::endl;
        this->energy_points -= 1;
    }
    else if (this->hit_points <= 0)
    {
        std::cout << BOLDMAGENTA << "ClapTrap " << this->name 
            << " can't attack " << target << " because it's dead!" << RESET 
            << std::endl;
    }
    else
    {
        std::cout << BOLDMAGENTA << "ClapTrap " << this->name 
            << " can't attack " << target << " because it has no energy points!" 
            << RESET << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points > 0)
    {
        std::cout << BOLDRED << "ClapTrap " << this->name << " takes " << amount 
            << " points of damage!" << RESET << std::endl;
        if (amount > this->hit_points)
            this->hit_points = 0;
        else
            this->hit_points -= amount;
    }
    else
    {
        std::cout << "ClapTrap stop it " << this->name << " is already dead!"
            << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points > 0 && this->hit_points > 0)
    {
        std::cout << BOLDGREEN << "ClapTrap " << this->name << " is repaired " 
            << amount << " points of damage!" << RESET << std::endl;
        if (amount > this->energy_points)
        {
            this->hit_points += this->energy_points;
            this->energy_points = 0;
        }
        else
        {
            this->hit_points += amount;
            this->energy_points -= amount;
        }
    }
    else if (this->hit_points <= 0)
    {
        std::cout  << BOLDMAGENTA << "ClapTrap " << this->name 
            << " can't be repaired because " << "it's dead!" << RESET 
            << std::endl;
    }
    else
    {
        std::cout  << BOLDMAGENTA << "ClapTrap " << this->name 
            << " can't be repaired because " << "it has no energy points!" 
            << RESET << std::endl;
    }
}

std::string ClapTrap::getName(void)
{
    return (this->name);
}

int ClapTrap::getHitPoints(void)
{
    return (this->hit_points);
}

int ClapTrap::getEnergyPoints(void)
{
    return (this->energy_points);
}

int ClapTrap::getAttackDamage(void)
{
    return (this->attack_damage);
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setHitPoints(int hit_points)
{
    this->hit_points = hit_points;
}

void ClapTrap::setEnergyPoints(int energy_points)
{
    this->energy_points = energy_points;
}

void ClapTrap::setAttackDamage(int attack_damage)
{
    this->attack_damage = attack_damage;
}

void ClapTrap::displayStats(void)
{
    std::cout << BOLDBLUE << "ClapTrap " << this->name << " has " 
        << this->hit_points  << " hit points, " << this->energy_points 
        << " energy points and " << this->attack_damage << " attack damage."
        << RESET << std::endl;
    
}
