#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : hit_points(10), energy_point(10), attack_damage(0)
{
	std::cout << "Default constructer called\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)// : hit_points(10), energy_point(10), attack_damage(0)
{
	std::cout << "Copy constructor called\n";
	name = other.name;
	hit_points = other.hit_points;
	energy_point = other.energy_point;
	attack_damage = other.attack_damage;
}

ClapTrap::ClapTrap(const std::string& name) : hit_points(10), energy_point(10), attack_damage(0)
{
	std::cout << "Parametric constructer called\n";
	this->name = name;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &other)
{
	if (this == &other)
		return (*this);	

	std::cout << "Copy assignment operator called\n";
	// fixed_point = other.getRawBits();
	name = other.name;
	hit_points = other.hit_points;
	energy_point = other.energy_point;
	attack_damage = other.attack_damage;
	return (*this);
}


ClapTrap::~ClapTrap()
{
	std::cout << "Destructer called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0 || this->energy_point <= 0)
		return ;
	std::cout << "ClapTrap " + this->name + " attacks " + target + " , causing ";
	std::cout << this->attack_damage;
	std::cout << " points of damage!\n";
	this->energy_point--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0 || this->energy_point <= 0)
		return ;
	this->hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0 || this->energy_point <= 0)
		return ;
	this->hit_points += amount;
	this->energy_point--;
}