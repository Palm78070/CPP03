#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
 std::cout << "FragTrap " << this->_name << " is constructed" << std::endl;
 this->_HitPts = 100;
 this->_EnergyPts = 100;
 this->_AttackDmg = 30;
}

void FragTrap::highFiveGuys(void)
{
 if (this->_EnergyPts <= 0)
 {
  std::cout << "FragTrap " << this->_name << "cannot attack: has no energy point left" << std::endl;
  return;
 }
 std::cout << "FragTrap " << this->_name << " has request for a positive high fives" << std::endl;
 this->_EnergyPts -= 1;
}

FragTrap::~FragTrap()
{
 std::cout << "FragTrap " << this->_name << " is destroyed" << std::endl;
}