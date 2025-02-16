/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:03:45 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/16 11:46:31 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	{
	ScavTrap A("Robochiotte");
	ScavTrap clone = A;
	clone.setName("Clone");
	ScavTrap B("Moulipute");


	for (int i = 0; i < 2; i++) {
	A.attack("Moulipute");
	}
	
	for (int i = 0; i < 3; i++) {
	A.guardGate();
	}
	clone.guardGate();
/*
	for (int i = 0; i < 10; i++) {
	A.takeDamage(8);
	}

*/
	}

	return (0);
}