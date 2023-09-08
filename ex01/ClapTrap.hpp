#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
			ClapTrap(void);
			ClapTrap(const ClapTrap &other);
			ClapTrap(const std::string &name);
			ClapTrap &operator = (const ClapTrap &other);
			~ClapTrap();
	
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	protected:
		std::string	name;
		int			hit_points;
		int			energy_point;
		int			attack_damage;
};

#endif