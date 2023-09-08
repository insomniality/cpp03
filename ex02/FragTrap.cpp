#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	std::cout << "Default constructer called for FragTrap\n";
	hit_points = 100;
	energy_point = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other) // : hit_points(100), energy_point(100), attack_damage(30) // idk why chi ashxatum senc
{
	std::cout << "Copy constructor called for FragTrap\n";
	name = other.name;
	hit_points = other.hit_points;
	energy_point = other.energy_point;
	attack_damage = other.attack_damage;
}

FragTrap::FragTrap(const std::string& name)
{
	std::cout << "Parametric constructer called for FragTrap\n";
	this->name = name;
	hit_points = 100;
	energy_point = 100;
	attack_damage = 30;
}

FragTrap& FragTrap::operator = (const FragTrap &other)
{
	if (this == &other)
		return (*this);	

	std::cout << "Copy assignment operator called for FragTrap\n";
	// fixed_point = other.getRawBits();
	name = other.name;
	hit_points = other.hit_points;
	energy_point = other.energy_point;
	attack_damage = other.attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructer called for FragTrap\n";
}

//---------------------------

void	FragTrap::highFivesGuys(void)
{
	std::cout << "HighFive from FragTrap!\n";
}
