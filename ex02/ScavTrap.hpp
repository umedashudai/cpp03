/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:57:50 by shuu              #+#    #+#             */
/*   Updated: 2025/11/27 15:47:49 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {

    public:
        ScavTrap(std::string name);
        ScavTrap(void);
        ScavTrap(const ScavTrap& copy);
        ScavTrap &operator=(const ScavTrap& copy);
        ~ScavTrap(void);
        void attack(const std::string& target);
        void guardGate(void);
};

#endif
