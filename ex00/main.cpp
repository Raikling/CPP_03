#include "ClapTrap.hpp"



int main(void)
{
    ClapTrap ct("Raiklings");
    
    ct.attack("Jefff");
    ct.attack("Karen");
    ct.takeDamage(8);
    ct.getStats();
    ct.beRepaired(100);
    ct.getStats();
    ct.takeDamage(11);
    ct.getStats();
    ct.attack("Harl");


    return 0;
}