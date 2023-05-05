/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:16:33 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/05 19:16:38 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap ash("Ash");
	DiamondTrap ash2(ash);
	DiamondTrap ash3(".");

	ash.whoAmI();
	ash2.whoAmI();
	ash3 = ash;
	ash3.whoAmI();

	ash.attack("the air");
	ash.takeDamage(10);
	ash.beRepaired(10);
	return (0);
}
