#include "ScavTrap.hpp"

int main(void)
{
 ScavTrap A("A");
 ScavTrap B("B");
 A.guardGate();
 A.attack("B");
 B.takeDamage(20);
 A.attack("B");
 A.attack("B");
 A.attack("B");
 A.attack("B");
 B.takeDamage(80);
 return (0);
}