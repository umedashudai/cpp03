/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:50:47 by shuu              #+#    #+#             */
/*   Updated: 2025/11/30 14:30:00 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void) {
	std::cout << "=== Exercise 01: ScavTrap Inheritance Tests ===" << std::endl;

	std::cout << "\n--- Test 1: Construction Chain ---" << std::endl;
	std::cout << "Creating ScavTrap (should call ClapTrap constructor first):" << std::endl;
	{
		ScavTrap scav("Guardian");
		std::cout << "\nDestruction (should call ScavTrap destructor first, then ClapTrap):" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "--- Test 2: ScavTrap vs ClapTrap Attributes ---" << std::endl;
	{
		ClapTrap clap("Clap");
		ScavTrap scav("Scav");

		std::cout << "\nClapTrap: HP(10), EP(10), Damage(0)" << std::endl;
		clap.attack("Target");

		std::cout << "\nScavTrap: HP(100), EP(50), Damage(20)" << std::endl;
		scav.attack("Target");
	}

	std::cout << "\n--- Test 3: Guard Gate (ScavTrap Special) ---" << std::endl;
	{
		ScavTrap scav("Gatekeeper");
		scav.guardGate();
		scav.takeDamage(200);
		scav.guardGate();
	}

	std::cout << "\n--- Test 4: Multiple ScavTraps ---" << std::endl;
	{
		std::cout << "Creating 3 ScavTraps:" << std::endl;
		ScavTrap s1("First");
		ScavTrap s2("Second");
		ScavTrap s3("Third");
		std::cout << "\nDestruction order (Third->Second->First):" << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
