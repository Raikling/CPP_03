#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name(""), _hit_Pts(100),_energy_Pts(50), _attack_dmg(20) 
{
    std::cout << "Default constructor called." << std::endl;
    return;
}


ClapTrap::ClapTrap(std::string name):_name(name), _hit_Pts(100),_energy_Pts(50), _attack_dmg(20) 
{
    std::cout << "Parametric constructor called." << std::endl;
    return;
}


std::string ClapTrap::getName(void) const
{
    return this->_name;
}

unsigned int ClapTrap::getHitPts(void) const
{
    return this->_hit_Pts;
}

unsigned int ClapTrap::getEnergyPts(void) const
{
    return this->_energy_Pts;
}

unsigned int ClapTrap::getAttackdmg(void) const
{
    return this->_attack_dmg;
}

ClapTrap::ClapTrap(ClapTrap const& other)
{
    std::cout << "Copy constuctor called." << std::endl;
    this->_name = other.getName();
    this->_hit_Pts = other.getHitPts();
    this->_energy_Pts = other.getEnergyPts();
    this->_attack_dmg = other.getAttackdmg();

    return;
}    


ClapTrap& ClapTrap::operator=(ClapTrap const& rhs)
{
    std::cout << "Copy assagnment operator called." << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_hit_Pts = rhs.getHitPts();
        this->_energy_Pts = rhs.getEnergyPts();
        this->_attack_dmg = rhs.getAttackdmg();
    }

    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Desconstructor called." << std::endl;
    return;
}



void ClapTrap::attack(const std::string& target)
{
    if (this->_energy_Pts > 0 && this->_hit_Pts > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing "<< this->_attack_dmg << " of damage!" << std::endl;
        this->_energy_Pts--;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " Cannot be repaired because it is either DEAD or out of ENERGY." << std::endl;
        return ;
    }


    return;
}



void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_Pts <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already DEAD and cannot take any more damage." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " took " << amount << " of damage!" << std::endl;
    if (amount >= this->_hit_Pts)
        this->_hit_Pts = 0;
    else
        this->_hit_Pts -= amount;

    return;
}




void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_Pts <= 0 || this->_hit_Pts <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " Cannot be repaired because it is either DEAD or out of ENERGY." << std::endl;
    }
    
    if (this->_energy_Pts > 0 && this->_hit_Pts > 0)
    {
        std::cout << "ClapTrap " << this->_name << " repaired " << amount << " hit points." << std::endl;
        this->_hit_Pts += amount;
        this->_energy_Pts--;
    }
    return;
}