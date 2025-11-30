/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 23:36:26 by shuu              #+#    #+#             */
/*   Updated: 2025/11/27 15:47:42 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {

    public:
        FlagTrap(std::string name);
        FlagTrap(void);
        FlagTrap(const FlagTrap& copy);
        FlagTrap &operator=(const FlagTrap& copy);
        ~FlagTrap(void);
        void highFivesGuys(void);
};

#endif
