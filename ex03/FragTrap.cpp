#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
    std::cout << "FragTrap's default constructor called." << std::endl;
    return;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap's Parametric constructor called." << std::endl;
    return;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap's deconstructor called." << std::endl;
    return;
}


void FragTrap::highFivesGuys(void)
{
    std::cout << "GIMME FIVE! You've earned it  .... That's what I'm talking about!" << std::endl;
    return;
}

