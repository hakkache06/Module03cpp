/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakkach <yhakkach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 02:35:01 by yhakkach          #+#    #+#             */
/*   Updated: 2022/05/31 15:47:55 by yhakkach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(int argc, char const *argv[])
{
	ScavTrap	tibo("tibo");
	ScavTrap	ennemy("ennemy");

	tibo.setAttackDammage(10);
	tibo.attack("ennemy");
	tibo.guardGate();
	ennemy.takeDamage(10);
	ennemy.beRepaired(2);
	
	return 0;
}
