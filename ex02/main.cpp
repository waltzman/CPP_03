/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:27:32 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/21 17:53:32 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main (void)
{
	FragTrap a = FragTrap("Zel FragTrap");
	FragTrap b("Hen Frag");
	std::cout << " * COPY constructor *" << std::endl;
	FragTrap c = b;
	std::cout << std::endl;
	a.attack("Frog");
	a.takeDamage(50);
	a.takeDamage(60);
	a.takeDamage(50);
	a.beRepaired(50);
	b.attack("Mel");
	c.highFivesGuys();
	for (int i = 0; i < 11; i++)
	{
		b.attack("Random robot");
		b.takeDamage(10);
	}
	b.beRepaired(3);
	return (0);
}
