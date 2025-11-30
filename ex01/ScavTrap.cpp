/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:57:36 by shuu              #+#    #+#             */
/*   Updated: 2025/11/30 14:50:26 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {

    this->_hits = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap Default Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

    this->_hits = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap Constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap() {

    this->_hits = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap Copy Constructor" << std::endl;
    if (this != &copy)
        *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& copy) {

    if (this != &copy)
    {
        this->_hits = copy.getHitPoints();
        this->_energy = copy.getEnergyPoints();
        this->_damage = copy.getDamage();
    }
    return *this;
}

ScavTrap::~ScavTrap(void) {

    std::cout << "ScavTrap Destructor" << std::endl;
}

void ScavTrap::attack(const std::string& target) {

    if (this->_hits <= 0) {
        std::cout << "Hit points are already empty." << std::endl;
        return ;
    }
    if (this->_energy > 0) {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
        this->_energy--;
    } else  
        std::cout << "ScavTrap " << this->_name << " doesn't already have energy points." << std::endl;
}

void ScavTrap::guardGate(void) {

    if (this->_hits <= 0){
		std::cout << "Hit points are empty." << std::endl;
		return ;
	}
	std::cout << this->_name << " is now gatekeeper!"<< std::endl;
}
