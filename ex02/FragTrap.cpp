/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:10:22 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/05 19:10:28 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " is constructed" << std::endl;
	this->_HitPts = 100;
	this->_EnergyPts = 100;
	this->_AttackDmg = 30;
}

void FragTrap::highFiveGuys(void)
{
	if (this->_EnergyPts <= 0)
	{
		std::cout << "FragTrap " << this->_Name << "cannot attack: has no energy point left" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_Name << " has request for a positive high fives" << std::endl;
	this->_EnergyPts -= 1;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_Name << " is destroyed" << std::endl;
}
