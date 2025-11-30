/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:50:47 by shuu              #+#    #+#             */
/*   Updated: 2025/11/27 15:18:19 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap a("namunamu");
	ScavTrap b("pomupomu");

	std::cout << "\nnamunamu\nhp:10\nep:10\n\n";
	a.attack("pomupomu");
	b.attack("namunamu");
	b.beRepaired(0);
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.takeDamage(200);
	b.attack("namunamu");
}
