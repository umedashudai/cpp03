/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:03:04 by shuu              #+#    #+#             */
/*   Updated: 2025/11/30 17:52:26 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hits(10), _energy(10), _damage(0) {

    std::cout << "ClapTrap Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hits(10), _energy(10), _damage(0) {

    std::cout << "ClapTrap Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) : _name("default"), _hits(10), _energy(10), _damage(0) {

    std::cout << "ClapTrap Copy Constructor" << std::endl;

    if (this != &copy)
        *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy) {
    
    if (this != &copy)
    {
        this->_hits = copy.getHitPoints();
        this->_energy = copy.getEnergyPoints();
        this->_damage = copy.getDamage();
    }
    return *this;
}

ClapTrap::~ClapTrap(void) {

    std::cout << "ClapTrap Destructor" << std::endl;
}

void ClapTrap::attack(const std::string& target) {

    if (this->_hits <= 0) {
        std::cout << "Hit points are already empty." << std::endl;
        return ;
    }
    if (this->_energy > 0) {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
        this->_energy--;
    } else  
        std::cout << "ClapTrap " << this->_name << " doesn't already have energy points." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {

    if (this->_hits > 0) {

        std::cout << this->_name << " takes " << amount << " of dameges." << std::endl;
        if (this->_hits < amount)
            this->_hits = 0;
        else
            this->_hits -= amount;
    } else
        std::cout << "Hit points are already empty." << std::endl;
        
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->_hits <= 0) {
        std::cout << "Hit points are already empty." << std::endl;
        return ;
    }
    if (this->_energy > 0) {
        std::cout << "ClapTrap " << this->_name << " is repaired, getting " << amount << " hit points." << std::endl;
        this->_energy--;
        this->_hits += amount;
    } else
        std::cout << "ClapTrap " << this->_name << "doesn't already have energy points." << std::endl;
}

unsigned int ClapTrap::getHitPoints(void) const {

    return this->_hits;
}

unsigned int ClapTrap::getEnergyPoints(void) const {

    return this->_energy;
}

unsigned int ClapTrap::getDamage(void) const {
    
    return this->_damage;
}
