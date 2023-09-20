/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:17:52 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/20 18:26:15 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name; // Give the same name as in ClapTrap base class


public:
    static const int HIT_POINTS;
    static const int ENERGY_POINTS;
    static const int ATTACK_DAMAGE;

    DiamondTrap(void);
    DiamondTrap(std::string name);
    ~DiamondTrap(void);
    DiamondTrap(DiamondTrap const &src);
    DiamondTrap &operator=(DiamondTrap const &src);

    void displayStats(void);
    void attack(std::string const &target);
    void whoAmI(void);
    using FragTrap::getHitPoints;
    using ScavTrap::getEnergyPoints;
    using FragTrap::getAttackDamage;
};

#endif