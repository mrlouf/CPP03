/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:04:30 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/16 10:13:21 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap " << name << " invoked from Robots' heaven!" << std::endl;
	
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " was sent to Robots' hell!" << std::endl;
}

std::string ClapTrap::getName() const {
	return this->_name;
}

void ClapTrap::attack(const std::string &target) {
	switch (_energyPoints == 0) {
	case true:
		std::cout << "ClapTrap " << _name << " does not have enough energy to attack!";
		std::cout << std::endl;
		break;
	case false:
		std::cout << "ClapTrap " << _name << " attacks " << target;
		std::cout << " causing " << _attackDamage << " points of damage!";
		std::cout << std::endl;
		_energyPoints--;
		break;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	switch (_hitPoints > amount) {
		case true:
			_hitPoints -= amount;
			std::cout << "ClapTrap " << _name << " takes " << amount;
			std::cout << " points of damage, has " << _hitPoints << " hit points left!";
			std::cout << std::endl;
			break;
		case false:
			_hitPoints = 0;
			std::cout << "ClapTrap " << _name << " takes " << amount;
			std::cout << " points of damage and has died of death!";
			std::cout << std::endl;
			break;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	switch (_energyPoints == 0) {
		case true:
			std::cout << "ClapTrap " << _name << " does not have enough energy to repair himself!";
			std::cout << std::endl;
			break;
		case false:
			_hitPoints += amount;
			std::cout << "ClapTrap " << _name << " repairs " << amount;
			std::cout << " points, has " << _hitPoints << " hit points now!";
			std::cout << std::endl;
			_energyPoints--;
			break;
	}
}

std::ostream &operator<<(std::ostream &out, const ClapTrap &C) {
	out << C.getName();
	return out;
}