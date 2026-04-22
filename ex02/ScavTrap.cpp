/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:37:36 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/22 11:57:26 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "app.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << SCAVTRAP_COLOR 
	<< "[ScavTrap default constructor called]"
	<< RESET_COLOR
	<< std::endl;
}

ScavTrap::ScavTrap(std::string name_str) : ClapTrap(name_str)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << SCAVTRAP_COLOR 
	<< "[ScavTrap parametrized constructor of "
	<< this->_name
	<< " called]"
	<< RESET_COLOR
	<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << SCAVTRAP_COLOR 
	<< "[ScavTrap copy constructor called]"
	<< RESET_COLOR
	<< std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << SCAVTRAP_COLOR 
	<< "[ScavTrap destructor of "
	<< _name
	<< " called]"
	<< RESET_COLOR
	<< std::endl;
}

void	ScavTrap::attack(const std::string & target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "ScavTrap "
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
		<< "ScavTrap "
		<< _name
		<< " is not able to attack. No energy points!"
		<< RESET_COLOR
		<< std::endl;
	else
		std::cout << RED
		<< "ScavTrap "
		<< this->_name
		<< " is not able to attack. No hit points!"
		<< RESET_COLOR
		<< std::endl;
}

void 	ScavTrap::guardGate()
{
	std::cout << SCAVTRAP_COLOR 
	<< "ScavTrap "
	<< this->_name
	<< " switched to Gate Keeper mode! "
	<< RESET_COLOR
	<< std::endl;
}