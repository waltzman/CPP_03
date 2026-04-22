/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:27:32 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/22 11:50:31 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void)
{
	DiamondTrap a;
	DiamondTrap b("Diamond");
	FragTrap c("Lucy");
	b.attack("Lucy");
	c.attack("Diamond");
	b.takeDamage(30);
	b.takeDamage(30);
	b.beRepaired(2);
	b.takeDamage(42);
	b.takeDamage(30);
	b.whoAmI();
}
