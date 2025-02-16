/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:19:31 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/16 14:22:19 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	private:
		bool	_guarding;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
   		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();

		void attack(std::string targer);

		void guardGate();
};

std::ostream &operator<<(std::ostream &out, ScavTrap &s);

#endif