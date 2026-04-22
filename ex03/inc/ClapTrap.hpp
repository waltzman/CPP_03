/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 12:19:31 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/21 11:27:21 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	// changed to protected to be reachable to derived classes
	protected: 

		std::string _name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
	
	public:

		ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap(std::string name);

		~ClapTrap();

		ClapTrap& operator= (const ClapTrap& src);

		// PUBLIC METHODS

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired (unsigned int amount);
};

#endif

