#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
 // ScavTrap A("A");
 // FragTrap B("B");
 // A.guardGate();
 // B.highFiveGuys();
 // A.attack("B");
 // A.attack("B");
 // A.attack("B");
 // A.attack("B");
 // A.attack("B");
 // B.takeDamage(100);
 // A.attack("B");
 // B.takeDamage(20);
 // B.beRepaired(100);
 FragTrap ash("Ash");
 FragTrap ash2(ash);

 ash.attack("the air");
 ash.takeDamage(10);
 ash.beRepaired(10);
 ash.highFiveGuys();
 return (0);
}