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
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main(void) {
	std::cout << "=== Exercise 02: FragTrap Inheritance Tests ===" << std::endl;

	std::cout << "\n--- Test 1: Construction Chain ---" << std::endl;
	std::cout << "Creating FragTrap (should call ClapTrap constructor first):" << std::endl;
	{
		FlagTrap frag("Cheerful");
		std::cout << "\nDestruction (should call FragTrap destructor first, then ClapTrap):" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "--- Test 2: All Three Types Together ---" << std::endl;
	{
		std::cout << "Creating all three types:" << std::endl;
		ClapTrap clap("Clap");
		ScavTrap scav("Scav");
		FlagTrap frag("Frag");

		std::cout << "\nStats:" << std::endl;
		std::cout << "ClapTrap: HP(10),  EP(10),  Damage(0)" << std::endl;
		std::cout << "ScavTrap: HP(100), EP(50),  Damage(20)" << std::endl;
		std::cout << "FragTrap: HP(100), EP(100), Damage(30)" << std::endl;

		std::cout << "\nAttacks:" << std::endl;
		clap.attack("Target");
		scav.attack("Target");
		frag.attack("Target");

		std::cout << "\nSpecial abilities:" << std::endl;
		scav.guardGate();
		frag.highFivesGuys();

		std::cout << "\nDestruction order (Frag->Scav->Clap):" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "--- Test 3: FragTrap High Fives ---" << std::endl;
	{
		FlagTrap frag("Friendly");
		frag.highFivesGuys();
		frag.takeDamage(200);
		frag.highFivesGuys();
	}

	std::cout << "\n--- Test 4: Multiple FragTraps ---" << std::endl;
	{
		std::cout << "Creating 3 FragTraps:" << std::endl;
		FlagTrap f1("Alpha");
		FlagTrap f2("Beta");
		FlagTrap f3("Gamma");

		f1.highFivesGuys();
		f2.highFivesGuys();
		f3.highFivesGuys();

		std::cout << "\nDestruction order (Gamma->Beta->Alpha):" << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
