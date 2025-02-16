/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 11:52:22 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/16 12:32:59 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Default FragTrap steps in the arena!" << std::endl;
	
	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

FragTrap::FragTrap(const FragTrap &other) {
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		std::cout << "FragTrap " << getName() << " successfully cloned!" << std::endl;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << getName() << " left the battefield!" << std::endl;
}

void highFivesGuys(void);

std::ostream &operator<<(std::ostream &out, FragTrap &f);