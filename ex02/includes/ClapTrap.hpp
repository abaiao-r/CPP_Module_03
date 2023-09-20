/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:37:18 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/20 16:06:29 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

/*colours*/
# define RESET		"\033[0m"
# define BOLDRED	"\033[1m\033[31m"
# define BOLDGREEN	"\033[1m\033[32m"
# define BOLDYELLOW	"\033[1m\033[33m"
# define BOLDBLUE	"\033[1m\033[34m"
# define BOLDMAGENTA	"\033[1m\033[35m"
# define BOLDCYAN	"\033[1m\033[36m"

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hit_points;
        unsigned int energy_points;
        unsigned int attack_damage;
    
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap(ClapTrap const &src);

        ClapTrap &operator=(ClapTrap const &src);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void displayStats(void);

        std::string getName(void);
        int getHitPoints(void);
        int getEnergyPoints(void);
        int getAttackDamage(void);

        void setName(std::string name);
        void setHitPoints(int hit_points);
        void setEnergyPoints(int energy_points);
        void setAttackDamage(int attack_damage);
};

#endif
