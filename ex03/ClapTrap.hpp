/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:14:13 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/05 19:14:21 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _HitPts;
		int _EnergyPts;
		int _AttackDmg;

	public:
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &);
		ClapTrap &operator=(const ClapTrap &);
		~ClapTrap();

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif
