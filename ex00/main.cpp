#include "ClapTrap.hpp"



int main(void)
{
    ClapTrap ct("Raiklings");
    
    ct.attack("Jefff");
    ct.attack("Karen");
    ct.takeDamage(8);
    ct.beRepaired(10);
    ct.takeDamage(11);
    ct.attack("Harl");


    return 0;
}