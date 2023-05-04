#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name) : _Name(name)
{
  std::cout << "ClapTrap " << this->_Name << " is constructed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
  *this = src;
  std::cout << "ClapTrap " << this->_Name << " is copied with copy constructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &x)
{
  if (this != &x)
  {
    this->_Name = x._Name;
    this->_HitPts = x._HitPts;
    this->_EnergyPts = x._EnergyPts;
    this->_AttackDmg = x._AttackDmg;
  }
  std::cout << "ClapTrap " << this->_Name << " is copied with copy assignment" << std::endl;
  return (*this);
}

void ClapTrap::attack(const std::string &target)
{
  if (this->_EnergyPts <= 0)
  {
    std::cout << "ClapTrap " << this->_Name << " cannot attack: has no energy point left" << std::endl;
    return;
  }
  std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing " << this->_AttackDmg << " points of damage!" << std::endl;
  this->_EnergyPts -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->_HitPts <= 0)
  {
    std::cout << "ClapTrap " << this->_Name << " is dead" << std::endl;
    return;
  }
  std::cout << "ClapTrap " << this->_Name << " take " << amount << " points of damage" << std::endl;
  this->_HitPts -= amount;
  if (this->_HitPts <= 0)
    std::cout << "ClapTrap " << this->_Name << " is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (this->_EnergyPts <= 0)
  {
    std::cout << "ClapTrap " << this->_Name << " cannot repaired: has no energy point left" << std::endl;
    return;
  }
  std::cout << "ClapTrap " << this->_Name << " is repaired, get " << amount << " hit points back" << std::endl;
  this->_HitPts += amount;
  this->_EnergyPts -= 1;
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap " << this->_Name << " is destroyed" << std::endl;
}