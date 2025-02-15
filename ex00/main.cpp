/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:03:45 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/15 19:21:19 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	{
	ClapTrap A("Robochiotte");

	for (int i = 0; i < 5; i++) {
	A.attack("Moulinette");
	}
	
	for (int i = 0; i < 2; i++) {
	A.beRepaired(8);
	}

	for (int i = 0; i < 10; i++) {
	A.takeDamage(8);
	}
	}

	return (0);
}