/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:05:48 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/05 19:08:39 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	// ScavTrap A("A");
	// ScavTrap B("B");
	// A.guardGate();
	// A.attack("B");
	// B.takeDamage(20);
	// A.attack("B");
	// A.attack("B");
	// A.attack("B");
	// A.attack("B");
	// B.takeDamage(80);
	ScavTrap ash("Ash");
	ScavTrap ash2(ash);

	ash.attack("the air");
	ash.takeDamage(20);
	ash.beRepaired(10);
	ash.guardGate();
	return (0);
}
