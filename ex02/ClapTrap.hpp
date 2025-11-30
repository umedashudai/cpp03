/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:51:23 by shuu              #+#    #+#             */
/*   Updated: 2025/11/27 15:47:38 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {

    protected:
        std::string          _name;
        unsigned int         _hits;
        unsigned int         _energy;
        unsigned int         _damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(void);
        ClapTrap(const ClapTrap& copy);
        ClapTrap &operator=(const ClapTrap& copy);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        unsigned int getHitPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getDamage(void) const;
};

#endif
