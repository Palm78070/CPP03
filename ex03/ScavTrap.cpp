#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
 std::cout << "ScavTrap " << this->_name << " is constructed" << std::endl;
 this->_HitPts = 100;
 this->_EnergyPts = 50;
 this->_AttackDmg = 20;
}

void ScavTrap::guardGate(void)
{
 std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
 if (this->_EnergyPts <= 0)
 {
  std::cout << "ScavTrap " << this->_name << "cannot attack: has no energy point left" << std::endl;
  return;
 }
 std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_AttackDmg << " points of damage!" << std::endl;
 this->_EnergyPts -= 1;
}

ScavTrap::~ScavTrap()
{
 std::cout << "ScavTrap " << this->_name << " is destroyed" << std::endl;
}