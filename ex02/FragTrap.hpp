#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap &other);
		FragTrap(const std::string &name);
		FragTrap &operator = (const FragTrap &other);
		~FragTrap();

		void	highFivesGuys(void);
};

#endif