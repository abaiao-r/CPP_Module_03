/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:12:18 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/18 20:50:44 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap : virtual public ClapTrap
{
  public:
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