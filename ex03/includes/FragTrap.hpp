/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:12:18 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/20 18:29:06 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap : virtual public ClapTrap
{
  public:
		static const int HIT_POINTS;
		static const int ENERGY_POINTS;
		static const int ATTACK_DAMAGE;

		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap &operator=(FragTrap const &src);

		void highFivesGuys(void);
		void attack(const std::string &target);
		void displayStats(void);
};

#endif