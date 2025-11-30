/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 23:39:46 by shuu              #+#    #+#             */
/*   Updated: 2025/11/30 13:46:52 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {

    this->_hits = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FlagTrap Constructor" << std::endl;
}

FlagTrap::FlagTrap(void) : ClapTrap() {

    this->_hits = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FlagTrap Default Constructor" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap& copy) : ClapTrap() {

    this->_hits = 100;
    this->_energy = 100;
    this->_damage = 30;
    if (this != &copy)
        *this = copy;
    std::cout << "FlagTrap Copy Constructor" << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap& copy) {

    if (this != &copy)
    {
        this->_hits = copy.getHitPoints();
        this->_energy = copy.getEnergyPoints();
        this->_damage = copy.getDamage();
    }
    return *this;
}

FlagTrap::~FlagTrap(void) {

    std::cout << "FlagTrap Destructor" << std::endl;
}

void FlagTrap::highFivesGuys(void) {

    	if (this->_hits <= 0) {
		std::cout << "Hit points are empty." << std::endl;
		return ;
	}
	std::cout << this->_name << "ate FiveGuys!!!!"<< std::endl;
}
