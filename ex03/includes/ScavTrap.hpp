/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:53:28 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/20 22:17:04 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
        static const int HIT_POINTS;
        static const int ENERGY_POINTS;
        static const int ATTACK_DAMAGE;
    public:

        ScavTrap(void);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const &src);
        ScavTrap &operator=(ScavTrap const &src);

        void attack(const std::string &target);
        void guardGate(void);
        void displayStats(void);
};

#endif
