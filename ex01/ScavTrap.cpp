#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
 std::cout << "ScavTrap " << name << " is constructed" << std::endl;
 this->_HitPts = 100;
 this->_EnergyPts = 50;
 this->_AttackDmg = 20;
}

void ScavTrap::guardGate(void)
{
 std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
 std::cout << "ScavTrap " << this->_Name << " is destroyed" << std::endl;
}