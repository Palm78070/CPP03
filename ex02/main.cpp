#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main(void)
{
 ScavTrap A("A");
 FlagTrap B("B");
 A.guardGate();
 B.highFiveGuys();
 A.attack("B");
 A.attack("B");
 A.attack("B");
 A.attack("B");
 A.attack("B");
 B.takeDamage(100);
 A.attack("B");
 A.attack("B");
 B.takeDamage(40);
 B.beRepaired(100);
 return (0);
}