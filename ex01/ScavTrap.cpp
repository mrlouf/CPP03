/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:22:43 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/16 11:41:23 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default ScavTrap joined the fight!" << std::endl;
	
	setName("Default");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	_guarding = false;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap " << name << " joined the fight!" << std::endl;
	
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	_guarding = false;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << getName() << " is now a pile of junk!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other) {
		setName(other.getName());
		setHitPoints(other.getHitPoints());
		setEnergyPoints(other.getEnergyPoints());
		setAttackDamage(other.getAttackDamage());
		std::cout << "ScavTrap " << getName() << " successfully cloned!" << std::endl;
	}
	return *this;
}

void ScavTrap::attack(std::string target) {
		switch (getEnergyPoints() == 0) {
	case true:
		std::cout << "ScavTrap " << getName() << " does not have enough energy to attack!";
		std::cout << std::endl;
		break;
	case false:
		std::cout << "ScavTrap " << getName() << " attacks " << target;
		std::cout << " causing " << getAttackDamage() << " points of damage!";
		std::cout << std::endl;
		decrementEnergyPoints();
		break;
	}
}

void ScavTrap::guardGate() {
	switch (_guarding) {
		case true:
			_guarding = false;
			std::cout << "ScavTrap " << getName() << " leaving Gate Keeper mode!" << std::endl;
			break;
		case false:
			_guarding = true;
			std::cout << "ScavTrap " << getName() << " entering Gate Keeper mode!" << std::endl;
			break;
	}
}

std::ostream &operator<<(std::ostream &out, ScavTrap &s) {
	out << s.getName();
	return out;
}