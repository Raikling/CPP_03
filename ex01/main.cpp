#include "ScavTrap.hpp"


int main(void)
{
    // ScavTrap scav;
    ScavTrap scav("Decepticon");

    std::cout << "ScavTrap's name: "<< scav.getName() << std::endl;
    std::cout << "ScavTrap's Hit points: " << scav.getHitPts() << std::endl;
    std::cout << "ScavTrap's Energy points: " << scav.getEnergyPts() << std::endl;
    std::cout << "ScavTrap's Attack damage: " << scav.getAttackdmg() << std::endl;

    std::cout <<"---------------------------------------" << std::endl;
    scav.attack("Shredder");
    scav.takeDamage(70);
    scav.getStats();
    scav.beRepaired(30);
    scav.getStats();
    scav.takeDamage(90);
    scav.getStats();
    scav.guardGate();
    scav.attack("Optimus Prime");
    scav.getStats();
    scav.beRepaired(100);
    scav.getStats();

    return 0;
}