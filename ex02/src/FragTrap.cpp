/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:19:39 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/20 19:34:48 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

/* Default constructor:
** Assign default values to all attributes
*/
FragTrap::FragTrap(void) : ClapTrap("Default")
{
    std::cout << BOLDCYAN << "Fragtrap " << this->getName() 
        << " default constructor called" << RESET << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

/* Parameter constructor:
** Assign all values of the parameters to this instance
*/
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << BOLDCYAN << "Fragtrap " << this->getName() 
        << " parameter constructor called" << RESET << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

/* Destructor:
** Default destructor
*/
FragTrap::~FragTrap(void)
{
    std::cout << BOLDCYAN << "FragTrap " << this->getName() 
        << " destructor called" << RESET << std::endl;
}

/* Copy constructor:
** Assign all values of the src to this instance
*/
FragTrap::FragTrap(FragTrap const &src)
{
    std::cout << BOLDCYAN << "FragTrap " << this->getName() 
        << " copy constructor called" << RESET << std::endl;
    *this = src;
}

/* operator=():
** Assignation operator overload
*/
FragTrap &FragTrap::operator=(FragTrap const &src)
{
    std::cout << BOLDCYAN << "FragTrap " << this->getName() 
        << " assignation operator called" << RESET << std::endl;
    if (this != &src)
    {
        ClapTrap::operator=(src); // Call base class assignation operator
    }
    return (*this);
}

/* attack():
** Attacks the target if it has enough energy points and is alive
*/
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

/* highFivesGuys():
** Requests a high five from the user
*/
void FragTrap::highFivesGuys(void)
{
    std::cout << BOLDCYAN << "FragTrap " << this->getName() 
        << " requests a high five!" << RESET << std::endl;
}

/* displayStats():
** Displays the stats of the current instance of FragTrap
*/
void FragTrap::displayStats(void)
{
    std::cout << BOLDBLUE << "FragTrap " << this->getName() << " has " 
        << this->getHitPoints() << " hit points, " << this->getEnergyPoints() 
        << " energy points and " << this->getAttackDamage() << " attack damage."
        << RESET << std::endl;
}