/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:34:13 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/22 12:03:04 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "app.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "not defined";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hit_points = DiamondTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = DiamondTrap::_attack_damage;
	std::cout << DIAMONDTRAP_COLOR 
	<< "[DiamondTrap default constructor called]"
	<< RESET_COLOR
	<< std::endl;
}
DiamondTrap::DiamondTrap(std::string name_str)
{
	this->_name = name_str;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hit_points = DiamondTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = DiamondTrap::_attack_damage;
	std::cout << DIAMONDTRAP_COLOR 
	<< "[DiamondTrap parametrized constructor of "
	<< this->_name 
	<< " called]"
	<< RESET_COLOR
	<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	std::cout << DIAMONDTRAP_COLOR 
	<< "[DiamondTrap copy constructor called]"
	<< RESET_COLOR
	<< std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << DIAMONDTRAP_COLOR 
	<< "[DIAMONDTrap destructor of "
	<< this->_name
	<< " called]"
	<< RESET_COLOR
	<< std::endl;
}

void DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << DIAMONDTRAP_COLOR
	<< "I am "
	<< this->_name
	<< " DiamondTrap and my ClapTrap name is: "
	<< ClapTrap::_name 
	<< ""
	<< RESET_COLOR
	<< std::endl;
}