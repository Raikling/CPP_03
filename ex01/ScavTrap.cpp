#include "ScavTrap.hpp"



ScavTrap::ScavTrap(void): ClapTrap()
{
    std::cout << "this is a ScavTrap's default constructor." << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
     std::cout << "this is a ScavTrap's parametric constructor." << std::endl;
    return;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "this is a ScavTrap's deconstructor." << std::endl;
    return;
}

void ScavTrap::guardGate()
{
    std::cout << "----------------------------" << std::endl;
    std::cout << "GateKeeper Mode initiated ...." << std::endl;
    std::cout << "G4T3K33P3R MODE ACTIVATED !!!" << std::endl;
    std::cout << "----------------------------" << std::endl;
}


void ScavTrap::getStats(void)
{
    std::cout << "----------------------------" << std::endl;
    std::cout << "ScavTrap: " << this->getName() << " stats:"<< std::endl;
    std::cout << "Hit Points: " << this->getHitPts() << std::endl;
    std::cout << "Energy Points: " << this->getEnergyPts() << std::endl;
    std::cout << "Attack Damage: " << this->getAttackdmg() << std::endl;
    std::cout << "----------------------------" << std::endl;
}
