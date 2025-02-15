/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:04:30 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/15 17:29:56 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap " << *this << " invoked from Robots' heaven!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) const {
	if ()
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << *this << " was sent to Robots' hell!" << std::endl;
}

std::string ClapTrap::getName() const {
	return this->_name;
}

void ClapTrap::attack(const std::string &target) {}

void ClapTrap::takeDamage(unsigned int amount) {}

void ClapTrap::beRepaired(unsigned int amount) {}

std::ostream &operator<<(std::ostream &out, const ClapTrap &C) {
	out << C.getName();
	return out;
}