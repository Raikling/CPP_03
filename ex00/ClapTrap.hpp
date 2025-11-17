#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hit_Pts;
        unsigned int _energy_Pts;
        unsigned int _attack_dmg;

    


    public:
        ClapTrap(void);                                 
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const& other);
        ClapTrap& operator=(ClapTrap const& rhs);
        ~ClapTrap(void);

        std::string getName(void) const;
        unsigned int getHitPts (void) const;
        unsigned int getEnergyPts (void) const;
        unsigned int getAttackdmg (void) const;

        void attack(const std::string& target);     
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);     

};


#endif