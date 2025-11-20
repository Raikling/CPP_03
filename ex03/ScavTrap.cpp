#include "ScavTrap.hpp"



ScavTrap::ScavTrap(void): ClapTrap()
{
    std::cout << "ScavTrap's default constructor called." << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
     std::cout << "ScavTrap's parametric constructor called." << std::endl;
    return;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap's deconstructor called." << std::endl;
    return;
}

void ScavTrap::guardGate()
{
    std::cout << "----------------------------" << std::endl;
    std::cout << "GateKeeper Mode initiated ...." << std::endl;
    std::cout << "G4T3K33P3R MODE ACTIVATED !!!" << std::endl;
    std::cout << "----------------------------" << std::endl;
}


