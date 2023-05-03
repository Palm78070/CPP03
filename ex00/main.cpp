#include "ClapTrap.hpp"

int main(void)
{
 ClapTrap A("A");
 ClapTrap B("B");
 A.attack("ClapTrap B");
 B.beRepaired(5);
 A.attack("ClapTrap B");
 B.takeDamage(200);
 return (0);
}