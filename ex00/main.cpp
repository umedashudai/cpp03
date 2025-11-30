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

int main(void) {
	std::cout << "=== Exercise 00: ClapTrap Tests ===" << std::endl;

	std::cout << "\n--- Test 1: Constructor and Destructor ---" << std::endl;
	{
		ClapTrap clap("Robot1");
	}
	std::cout << "(Destructor called)\n" << std::endl;

	std::cout << "--- Test 2: Attack Function ---" << std::endl;
	{
		ClapTrap attacker("Attacker");
		attacker.attack("Enemy1");
		attacker.attack("Enemy2");
	}

	std::cout << "\n--- Test 3: Take Damage and Repair ---" << std::endl;
	{
		ClapTrap robot("Defender");
		robot.takeDamage(5);
		robot.beRepaired(3);
		robot.attack("Target");
	}

	std::cout << "\n--- Test 4: Energy Exhaustion ---" << std::endl;
	{
		ClapTrap robot("EnergyTest");
		for (int i = 0; i < 11; i++) {
			robot.attack("Target");
		}
	}

	std::cout << "\n--- Test 5: Death Test ---" << std::endl;
	{
		ClapTrap robot("DeadRobot");
		robot.takeDamage(20);
		robot.attack("Enemy");
		robot.beRepaired(5);
	}

	return 0;
}
