/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:47:08 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/20 18:28:27 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

const int ClapTrap::HIT_POINTS = 10;
const int ClapTrap::ENERGY_POINTS = 10;
const int ClapTrap::ATTACK_DAMAGE = 0;

ClapTrap::ClapTrap(void)
{
    this->_name = "Default";
    this->_hit_points = ClapTrap::HIT_POINTS;
    this->_energy_points = ClapTrap::ENERGY_POINTS;
    this->_attack_damage = ClapTrap::ATTACK_DAMAGE;
    std::cout << BOLDCYAN << "ClapTrap " << this->getName()
        << " default construtor called this->setHitPoints(FragTrap::_hit_points) = FragTrap::_hit_points;" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << BOLDCYAN << "ClapTrap parameter constructor called" << RESET 
        << std::endl;
    this->_name = name;
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
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
        this->_name = src._name;
        this->_hit_points = src._hit_points;
        this->_energy_points = src._energy_points;
        this->_attack_damage = src._attack_damage;
    }
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if (this->_energy_points > 0 && this->_hit_points > 0)
    {
        std::cout << BOLDYELLOW << "ClapTrap " << this->_name << " attacks " 
            << target << ", causing " << this->_attack_damage 
            << " points of damage!" << RESET << std::endl;
        this->_energy_points -= 1;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << BOLDMAGENTA << "ClapTrap " << this->_name 
            << " can't attack " << target << " because it's dead!" << RESET 
            << std::endl;
    }
    else
    {
        std::cout << BOLDMAGENTA << "ClapTrap " << this->_name 
            << " can't attack " << target << " because it has no energy points!" 
            << RESET << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points > 0)
    {
        std::cout << BOLDRED << "ClapTrap " << this->_name << " takes " << amount 
            << " points of damage!" << RESET << std::endl;
        if (amount > this->_hit_points)
            this->_hit_points = 0;
        else
            this->_hit_points -= amount;
    }
    else
    {
        std::cout << "ClapTrap stop it " << this->_name << " is already dead!"
            << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points > 0 && this->_hit_points > 0)
    {
        std::cout << BOLDGREEN << "ClapTrap " << this->_name << " is repaired " 
            << amount << " points of damage!" << RESET << std::endl;
        if (amount > this->_energy_points)
        {
            this->_hit_points += this->_energy_points;
            this->_energy_points = 0;
        }
        else
        {
            this->_hit_points += amount;
            this->_energy_points -= amount;
        }
    }
    else if (this->_hit_points <= 0)
    {
        std::cout  << BOLDMAGENTA << "ClapTrap " << this->_name 
            << " can't be repaired because " << "it's dead!" << RESET 
            << std::endl;
    }
    else
    {
        std::cout  << BOLDMAGENTA << "ClapTrap " << this->_name 
            << " can't be repaired because " << "it has no energy points!" 
            << RESET << std::endl;
    }
}

std::string ClapTrap::getName(void)
{
    return (this->_name);
}

int ClapTrap::getHitPoints(void)
{
    return (this->_hit_points);
}

int ClapTrap::getEnergyPoints(void)
{
    return (this->_energy_points);
}

int ClapTrap::getAttackDamage(void)
{
    return (this->_attack_damage);
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int hit_points)
{
    this->_hit_points = hit_points;
}

void ClapTrap::setEnergyPoints(unsigned int energy_points)
{
    this->_energy_points = energy_points;
}

void ClapTrap::setAttackDamage(unsigned int attack_damage)
{
    this->_attack_damage = attack_damage;
}

void ClapTrap::displayStats(void)
{
    std::cout << BOLDBLUE << "ClapTrap " << this->_name << " has " 
        << this->_hit_points  << " hit points, " << this->_energy_points 
        << " energy points and " << this->_attack_damage << " attack damage."
        << RESET << std::endl;
    
}
