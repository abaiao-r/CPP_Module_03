/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:17:52 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/18 22:23:05 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
    std::string name;
    ScavTrap scavTrap;
    FragTrap fragTrap;

  public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    ~DiamondTrap(void);
    DiamondTrap(DiamondTrap const &src);
    DiamondTrap &operator=(DiamondTrap const &src);

    void whoAmI(void);
    void attack(const std::string &target);
    void displayStats(void);
    void setName(std::string name);
    std::string getName(void);
};

#endif