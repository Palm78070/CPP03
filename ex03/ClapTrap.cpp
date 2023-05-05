/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:13:59 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/05 19:14:03 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name) : _name(name)
{
	std::cout << "ClapTrap " << this->_name << " is constructed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "ClapTrap " << this->_name << " is copied with copy constructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &x)
{
	if (this != &x)
	{
		this->_name = x._name;
		this->_HitPts = x._HitPts;
		this->_EnergyPts = x._EnergyPts;
		this->_AttackDmg = x._AttackDmg;
	}
	std::cout << "ClapTrap " << this->_name << " is copied with copy assignment operator" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_EnergyPts <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot attack: has no energy point left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_AttackDmg << " points of damage!" << std::endl;
	this->_EnergyPts -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPts <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage" << std::endl;
	this->_HitPts -= amount;
	if (this->_HitPts <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPts <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot repaired: has no energy point left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " is repaired, get " << amount << " hit points back" << std::endl;
	this->_HitPts += amount;
	this->_EnergyPts -= 1;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " is destroyed" << std::endl;
}
