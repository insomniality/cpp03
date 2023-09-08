#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructer called for ScavTrap\n";
	hit_points = 100;
	energy_point = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) // : hit_points(100), energy_point(50), attack_damage(20) // idk why chi ashxatum senc
{
	std::cout << "Copy constructor called for ScavTrap\n";
	name = other.name;
	hit_points = other.hit_points;
	energy_point = other.energy_point;
	attack_damage = other.attack_damage;
}

ScavTrap::ScavTrap(const std::string& name)
{
	std::cout << "Parametric constructer called for ScavTrap\n";
	this->name = name;
	hit_points = 100;
	energy_point = 50;
	attack_damage = 20;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &other)
{
	if (this == &other)
		return (*this);	

	std::cout << "Copy assignment operator called for ScavTrap\n";
	// fixed_point = other.getRawBits();
	name = other.name;
	hit_points = other.hit_points;
	energy_point = other.energy_point;
	attack_damage = other.attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructer called for ScavTrap\n";
}

//---------------------------

void	ScavTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0 || this->energy_point <= 0)
		return ;
	std::cout << "ScavTrap " + this->name + " attacks " + target + " , causing ";
	std::cout << this->attack_damage;
	std::cout << " points of damage!\n";
	this->energy_point--;
}


void	ScavTrap::guardGate()
{
	std::cout << "Me (aka ScavTrap) is in  Gate keeper mode\n";
}