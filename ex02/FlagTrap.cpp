#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string const &name) : ClapTrap(name)
{
 std::cout << "FlagTrap " << name << " is constructed" << std::endl;
 this->_HitPts = 100;
 this->_EnergyPts = 100;
 this->_AttackDmg = 30;
}

void FlagTrap::highFiveGuys(void)
{
 if (this->_EnergyPts <= 0)
 {
  std::cout << "FlagTrap " << this->_Name << "cannot attack: has no energy point left" << std::endl;
  return;
 }
 std::cout << "FlagTrap " << this->_Name << " has request for a positive high fives" << std::endl;
 this->_EnergyPts -= 1;
}

FlagTrap::~FlagTrap()
{
 std::cout << "FlagTrap " << this->_Name << " is destroyed" << std::endl;
}