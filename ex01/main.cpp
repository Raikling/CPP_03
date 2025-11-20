#include "ScavTrap.hpp"


int main(void)
{
    // ScavTrap scav;
    ScavTrap scav("Decepticon");

    scav.getStats();

    scav.attack("Shredder");
    scav.takeDamage(70);
    scav.getStats();
    scav.beRepaired(1300);
    scav.getStats();
    scav.takeDamage(90);
    scav.getStats();
    scav.guardGate();
    scav.attack("Optimus Prime");
    scav.getStats();
    scav.takeDamage(1000);
    scav.beRepaired(100);
    scav.getStats();

    return 0;
}