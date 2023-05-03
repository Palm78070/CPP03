#ifndef FLAG_TRAP_HPP
#define FLAG_TRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public virtual ClapTrap
{
public:
 FlagTrap(std::string const &name);
 ~FlagTrap();
 void highFiveGuys(void);
};
#endif