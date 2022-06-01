#ifndef FRAGTRAP_HPP
 #define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        
    public:
        FragTrap(void);
        FragTrap(FragTrap const & src);
        FragTrap(std::string name);
        ~FragTrap(void);

        void highFivesGuys(void);

        FragTrap    &   operator=(FragTrap const & src);

};

#endif