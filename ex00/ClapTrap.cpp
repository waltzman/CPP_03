/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 12:51:57 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/21 17:17:15 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "app.hpp"

ClapTrap::ClapTrap()
{
	_name = "not defined";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << CLAPTRAP_COLOR 
		<< "[ClapTrap default constructor called]"
		<< RESET_COLOR
		<< std::endl;
}
ClapTrap::ClapTrap(std::string name_str) : _name(name_str)
{
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << CLAPTRAP_COLOR 
		<< "[ClapTrap constructor of "
		<< _name
		<< " constructor called]"
		<< RESET_COLOR
		<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << CLAPTRAP_COLOR 
		<< "[ClapTrap copy constructor called]"
		<< RESET_COLOR
		<< std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << CLAPTRAP_COLOR 
		<< "[ClapTrap destructor of "
		<< _name
		<< " called]"
		<< RESET_COLOR
		<< std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &src)
{
	std::cout << CLAPTRAP_COLOR 
		<< "[ClapTrap assignment operator called]"
		<< RESET_COLOR
		<< std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "ClapTrap "
		<< this->_name 
		<< " attacks "
		<< target
		<< ", causing "
		<< this->_attack_damage
		<< " points of damage!"
		<< std::endl;
		this->_energy_points--;
	}
	else if (this->_energy_points == 0)
		std::cout << RED
		<< "ClapTrap "
		<< this->_name
		<< " is not able to attack. No energy points!"
		<< RESET_COLOR
		<< std::endl;
	else
		std::cout << RED
		<< "ClapTrap "
		<< this->_name
		<< " is not able to attack. No hit points!"
		<< RESET_COLOR
		<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > amount)
		this->_hit_points -= amount;
	else if (this->_hit_points > 0)
		this->_hit_points = 0;
	else
		std::cout
		<< RED << "ClapTrap " << this->_name << " is already dead."
		<< RESET_COLOR
		<< std::endl;
	std::cout << CLAPTRAP_COLOR 
	<< 	"ClapTrap " << this->_name << " was attacked! "	<< RESET_COLOR 
	<< std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		this->_hit_points += amount;
		std::cout << CLAPTRAP_COLOR
		<< "ClapTrap "
		<< this->_name
		<< " repaired itself"
		<< RESET_COLOR
		<< std::endl;
	}
	else
		std::cout << RED
		<< "ClapTrap "
		<< this->_name
		<< " cannot repair itself !!!"
		<< RESET_COLOR
		<< std::endl;
}
