/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:04:29 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/05 19:07:12 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	// ClapTrap A("A");
	// ClapTrap B("B");
	// A.attack("ClapTrap B");
	// B.beRepaired(5);
	// A.attack("ClapTrap B");
	// B.takeDamage(0);
	ClapTrap clap("Ash");
	clap.attack("Staff");

	return (0);
}
