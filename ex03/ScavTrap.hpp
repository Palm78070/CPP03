#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
 ScavTrap(std::string const &name);
 ~ScavTrap();
 void guardGate(void);
 void attack(const std::string &target);
};
#endif