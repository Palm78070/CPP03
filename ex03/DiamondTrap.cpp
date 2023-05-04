#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
 /////////////////////////////////////////////////////////////////
 // std::cout << "Scav hitPts " << ScavTrap::_HitPts << std::endl;
 // std::cout << "Scav engPts " << ScavTrap::_EnergyPts << std::endl;
 // std::cout << "Scav attackDmg " << ScavTrap::_AttackDmg << std::endl;
 // std::cout << "Frag hitPts " << FragTrap::_HitPts << std::endl;
 // std::cout << "Frag engPts " << FragTrap::_EnergyPts << std::endl;
 // std::cout << "Frag attackDmg " << FragTrap::_AttackDmg << std::endl;
 /////////////////////////////////////////////////////////////////
 this->_name = name;
 this->ClapTrap::_name = name + "_clap_name";
 FragTrap::_HitPts = 100;
 // std::cout << "hitPts " << this->_HitPts;
 ScavTrap::_EnergyPts = 50;
 // std::cout << "engPts " << this->_EnergyPts;
 FragTrap::_AttackDmg = 30;
 // std::cout << "attackDmg " << this->_AttackDmg << std::endl;
 std::cout << "DiamondTrap " << this->_name << " is constructed" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
 std::cout << "I am DiamondTrap name: " << this->_name << " ClapTrap name: " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
 std::cout << "DiamondTrap " << this->_name << " is destroyed" << std::endl;
}