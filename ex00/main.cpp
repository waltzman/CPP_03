/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:27:32 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/20 15:44:42 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap a = ClapTrap("Bullfinch");
	ClapTrap b("Chickadee");
	ClapTrap c = b;
	a.attack("Frog");
	a.takeDamage(5);
	a.takeDamage(6);
	a.takeDamage(5);
	a.beRepaired(5);
	b.attack("Mel");
	c.attack("Trinity");
	for (int i = 0; i < 15; i++)
	{
		c.attack("Random robot");
	}
	c.beRepaired(3);
	return (0);
}