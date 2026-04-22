/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:30:04 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/22 11:57:08 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include "app.hpp"

FragTrap::FragTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << FRAGTRAP_COLOR 
	<< "[FragTrap default constructor called]"
	<< RESET_COLOR
	<< std::endl;
}

FragTrap::FragTrap(std::string name_str)
{	this->_name = name_str;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << FRAGTRAP_COLOR 
	<< "[FragTrap parametrized constructor of "
	<< this->_name
	<< " called]"
	<< RESET_COLOR
	<< std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << FRAGTRAP_COLOR 
	<< "[FragTrap copy constructor called]"
	<< RESET_COLOR
	<< std::endl;
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << FRAGTRAP_COLOR 
	<< "[FragTrap destructor of "
	<< _name
	<< " called]"
	<< RESET_COLOR
	<< std::endl;
}

void 	FragTrap::highFivesGuys(void)
{
	std::cout << FRAGTRAP_COLOR 
	<< this->_name << " says: \"Give me a high five!\""
	<< RESET_COLOR
	<< " 🖐️" 
	<< std::endl;
	
}
