#include "ScavTrap.hpp"

int main(void)
{
 // ScavTrap A("A");
 // ScavTrap B("B");
 // A.guardGate();
 // A.attack("B");
 // B.takeDamage(20);
 // A.attack("B");
 // A.attack("B");
 // A.attack("B");
 // A.attack("B");
 // B.takeDamage(80);
 ScavTrap ash("Ash");
 ScavTrap ash2(ash);

 ash.attack("the air");
 ash.takeDamage(20);
 ash.beRepaired(10);
 ash.guardGate();
 return (0);
}