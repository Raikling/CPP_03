#include "FragTrap.hpp"


int main(void)
{
    
   FragTrap frag("DESTRO");
   frag.getStats();
   frag.attack("DEFENDO");
   frag.takeDamage(30);
   frag.getStats();
   frag.beRepaired(10000);
   frag.getStats();

   frag.highFivesGuys();


    return 0;
}